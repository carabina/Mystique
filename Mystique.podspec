Pod::Spec.new do |s|
  s.name     = 'Mystique'
  s.version  = '0.1.0'
  s.license  = 'MIT'
  s.summary  = 'Helpers to create awsome animations.'
  s.homepage = 'https://github.com/gbammc/Mystique'
  s.author   = { 'Alvin Zhu' => 'gbammc@gmail.com' }
  s.social_media_url = "https://twitter.com/alvin_zhu"
  s.source   = { :git => 'https://github.com/gbammc/Mystique.git', :tag => s.version }
  s.requires_arc = true
  s.source_files = 'Mystique/*{.h,.c,.m}'

  pch_AF = <<-EOS
    #ifndef TARGET_OS_IOS
        #define TARGET_OS_IOS TARGET_OS_IPHONE
    #endif
  EOS

  s.ios.frameworks = 'Foundation', 'UIKit'

  s.ios.deployment_target = '8.0'
end
