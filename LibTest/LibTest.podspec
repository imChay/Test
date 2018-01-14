Pod::Spec.new do |s|
  s.name = 'LibTest'
  s.version = '1.0.0'
  s.ios.deployment_target = '8.0'
  s.license = 'MIT'
  s.summary = 'iOS TestLit Project'
  s.homepage = 'https://www.baidu.com'
  s.author = { 'cy' => '1510207073@qq.com' }
  s.source = { :git => "../../Test" }
  s.description = 'cy TestLib Project'
  s.requires_arc = true
  s.public_header_files = 'LitTest.h'  #公开头文件地址
  s.source_files = '*.{h,m}'
  s.dependency 'MJRefresh'
end
