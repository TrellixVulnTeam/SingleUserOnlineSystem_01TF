#!/bin/sh
grpc_tools_node_protoc --js_out=import_style=commonjs,binary:../SingleUserOnlineSvrCPP/ --grpc_out=../SingleUserOnlineSvrCPP --plugin=protoc-gen-grpc=`which grpc_tools_node_protoc_plugin` single_user_online.proto
cd ../SingleUserOnlineClient/SingleUserOnlineClient
make

