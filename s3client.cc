/*
 * for creds set/export AWS_ACCESS_KEY_ID AWS_SECRET_ACCESS_KEY from vstart.sh
 */

#include <aws/core/Aws.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/Bucket.h>
#include <aws/s3/model/CreateBucketRequest.h>


int main() {
    Aws::SDKOptions options;
    Aws::InitAPI(options);

    Aws::Client::ClientConfiguration clientconfig;
    clientconfig.region = "mexico";
    clientconfig.scheme = Aws::Http::Scheme::HTTP;
    std::string endpoint = "localhost:8000";
    clientconfig.endpointOverride = endpoint.c_str();

    Aws::S3::S3Client s3_client(clientconfig);

    /*
     * code to do things can go here
     */

    Aws::ShutdownAPI(options);


    return 0;
}
