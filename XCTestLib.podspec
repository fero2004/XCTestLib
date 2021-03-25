#
# Be sure to run `pod lib lint XCTestLib.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'XCTestLib'
  s.version          = '0.1.0'
  s.summary          = 'A short description of XCTestLib.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/fero2004/XCTestLib'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'fero2004' => 'fero2009@126.com' }
  s.source           = { :git => 'https://github.com/fero2004/XCTestLib.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'XCTestLib/Classes/**/*'
#  s.ios.vendored_frameworks = 'XCTestLib.framework'
#  s.library   = "XCTest"
  s.vendored_libraries = 'XCTestLib/Classes/*.a'
  s.preserve_paths = 'XCTestLib/Classes/XCTest.a'
#  s.public_header_files = 'XCTestLib/Classes/**/*.h'
  # s.resource_bundles = {
  #   'XCTestLib' => ['XCTestLib/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
   s.frameworks = 'UIKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
