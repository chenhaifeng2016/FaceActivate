#include <iostream>
#include "baidu_face_api.h"


int main() {
    BaiduFaceApi * api = new BaiduFaceApi();

    std::cout << "DeviceID: " << api->get_device_id() << std::endl;

    delete api;

    return 0;
}