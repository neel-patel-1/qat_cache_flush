#!/bin/bash
export ROOT_DIR=$(pwd)
source $ROOT_DIR/libs.src

#../configure \ 
#.--enable-qat_sw \
#.--with-openssl_install_dir=/home/n869p538/ktls_client_server/openssl/openssl \
#.--with-openssl_dir=/home/n869p538/ktls_client_server/openssl/openssl \
#.--disable-qat_hw

sudo make clean -j 35
make -j 35
sudo make install -j 35
