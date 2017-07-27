// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Android Device Provisioning Partner API (androiddeviceprovisioning/v1)
// Description:
//   Android Device Provisioning Partner API
// Documentation:
//   https://developers.google.com/zero-touch/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRAndroidProvisioningPartner_ClaimDeviceRequest;
@class GTLRAndroidProvisioningPartner_ClaimDevicesRequest;
@class GTLRAndroidProvisioningPartner_FindDevicesByDeviceIdentifierRequest;
@class GTLRAndroidProvisioningPartner_FindDevicesByOwnerRequest;
@class GTLRAndroidProvisioningPartner_UnclaimDeviceRequest;
@class GTLRAndroidProvisioningPartner_UnclaimDevicesRequest;
@class GTLRAndroidProvisioningPartner_UpdateDeviceMetadataInBatchRequest;
@class GTLRAndroidProvisioningPartner_UpdateDeviceMetadataRequest;

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Android Provisioning Partner query classes.
 */
@interface GTLRAndroidProvisioningPartnerQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  Method: androiddeviceprovisioning.operations.get
 */
@interface GTLRAndroidProvisioningPartnerQuery_OperationsGet : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForOperationsGetWithname:]

/** The name of the operation resource. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Operation.
 *
 *  Gets the latest state of a long-running operation. Clients can use this
 *  method to poll the operation result at intervals as recommended by the API
 *  service.
 *
 *  @param name The name of the operation resource.
 *
 *  @returns GTLRAndroidProvisioningPartnerQuery_OperationsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  List all the customers that has delegates some role to this customer.
 *
 *  Method: androiddeviceprovisioning.partners.customers.list
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersCustomersList : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersCustomersListWithpartnerId:]

/** the id of the partner. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_ListCustomersResponse.
 *
 *  List all the customers that has delegates some role to this customer.
 *
 *  @param partnerId the id of the partner.
 *
 *  @returns GTLRAndroidProvisioningPartnerQuery_PartnersCustomersList
 */
+ (instancetype)queryWithPartnerId:(long long)partnerId;

@end

/**
 *  Claim the device identified by device identifier.
 *
 *  Method: androiddeviceprovisioning.partners.devices.claim
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesClaim : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesClaimWithObject:partnerId:]

/** Id of the partner. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_ClaimDeviceResponse.
 *
 *  Claim the device identified by device identifier.
 *
 *  @param object The @c GTLRAndroidProvisioningPartner_ClaimDeviceRequest to
 *    include in the query.
 *  @param partnerId Id of the partner.
 *
 *  @returns GTLRAndroidProvisioningPartnerQuery_PartnersDevicesClaim
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_ClaimDeviceRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Claim devices asynchronously
 *
 *  Method: androiddeviceprovisioning.partners.devices.claimAsync
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesClaimAsync : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesClaimAsyncWithObject:partnerId:]

/** partner id. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Operation.
 *
 *  Claim devices asynchronously
 *
 *  @param object The @c GTLRAndroidProvisioningPartner_ClaimDevicesRequest to
 *    include in the query.
 *  @param partnerId partner id.
 *
 *  @returns GTLRAndroidProvisioningPartnerQuery_PartnersDevicesClaimAsync
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_ClaimDevicesRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Find devices by device identifier.
 *
 *  Method: androiddeviceprovisioning.partners.devices.findByIdentifier
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesFindByIdentifier : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesFindByIdentifierWithObject:partnerId:]

/** id of the partner. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c
 *  GTLRAndroidProvisioningPartner_FindDevicesByDeviceIdentifierResponse.
 *
 *  Find devices by device identifier.
 *
 *  @param object The @c
 *    GTLRAndroidProvisioningPartner_FindDevicesByDeviceIdentifierRequest to
 *    include in the query.
 *  @param partnerId id of the partner.
 *
 *  @returns GTLRAndroidProvisioningPartnerQuery_PartnersDevicesFindByIdentifier
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_FindDevicesByDeviceIdentifierRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Find devices by ownership.
 *
 *  Method: androiddeviceprovisioning.partners.devices.findByOwner
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesFindByOwner : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesFindByOwnerWithObject:partnerId:]

/** id of the partner. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_FindDevicesByOwnerResponse.
 *
 *  Find devices by ownership.
 *
 *  @param object The @c
 *    GTLRAndroidProvisioningPartner_FindDevicesByOwnerRequest to include in the
 *    query.
 *  @param partnerId id of the partner.
 *
 *  @returns GTLRAndroidProvisioningPartnerQuery_PartnersDevicesFindByOwner
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_FindDevicesByOwnerRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Get a device
 *
 *  Method: androiddeviceprovisioning.partners.devices.get
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesGet : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesGetWithname:]

/** resource name in 'partners/[PARTNER_ID]/devices/[DEVICE_ID]'. */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Device.
 *
 *  Get a device
 *
 *  @param name resource name in 'partners/[PARTNER_ID]/devices/[DEVICE_ID]'.
 *
 *  @returns GTLRAndroidProvisioningPartnerQuery_PartnersDevicesGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Update the metadata
 *
 *  Method: androiddeviceprovisioning.partners.devices.metadata
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesMetadata : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesMetadataWithObject:metadataOwnerId:deviceId:]

/** id of the partner. */
@property(nonatomic, assign) long long deviceId;

/** The owner of the newly set metadata. Should be partner id itself. */
@property(nonatomic, assign) long long metadataOwnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_DeviceMetadata.
 *
 *  Update the metadata
 *
 *  @param object The @c
 *    GTLRAndroidProvisioningPartner_UpdateDeviceMetadataRequest to include in
 *    the query.
 *  @param metadataOwnerId The owner of the newly set metadata. Should be
 *    partner id itself.
 *  @param deviceId id of the partner.
 *
 *  @returns GTLRAndroidProvisioningPartnerQuery_PartnersDevicesMetadata
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_UpdateDeviceMetadataRequest *)object
                metadataOwnerId:(long long)metadataOwnerId
                       deviceId:(long long)deviceId;

@end

/**
 *  Unclaim the device identified by device_id or identifier.
 *
 *  Method: androiddeviceprovisioning.partners.devices.unclaim
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesUnclaim : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesUnclaimWithObject:partnerId:]

/** Id of the partner. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Empty.
 *
 *  Unclaim the device identified by device_id or identifier.
 *
 *  @param object The @c GTLRAndroidProvisioningPartner_UnclaimDeviceRequest to
 *    include in the query.
 *  @param partnerId Id of the partner.
 *
 *  @returns GTLRAndroidProvisioningPartnerQuery_PartnersDevicesUnclaim
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_UnclaimDeviceRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Unclaim devices asynchronously
 *
 *  Method: androiddeviceprovisioning.partners.devices.unclaimAsync
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesUnclaimAsync : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesUnclaimAsyncWithObject:partnerId:]

/** partner id. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Operation.
 *
 *  Unclaim devices asynchronously
 *
 *  @param object The @c GTLRAndroidProvisioningPartner_UnclaimDevicesRequest to
 *    include in the query.
 *  @param partnerId partner id.
 *
 *  @returns GTLRAndroidProvisioningPartnerQuery_PartnersDevicesUnclaimAsync
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_UnclaimDevicesRequest *)object
                      partnerId:(long long)partnerId;

@end

/**
 *  Set metadata in batch asynchronously.
 *
 *  Method: androiddeviceprovisioning.partners.devices.updateMetadataAsync
 */
@interface GTLRAndroidProvisioningPartnerQuery_PartnersDevicesUpdateMetadataAsync : GTLRAndroidProvisioningPartnerQuery
// Previous library name was
//   +[GTLQueryAndroidProvisioningPartner queryForPartnersDevicesUpdateMetadataAsyncWithObject:partnerId:]

/** partner id. */
@property(nonatomic, assign) long long partnerId;

/**
 *  Fetches a @c GTLRAndroidProvisioningPartner_Operation.
 *
 *  Set metadata in batch asynchronously.
 *
 *  @param object The @c
 *    GTLRAndroidProvisioningPartner_UpdateDeviceMetadataInBatchRequest to
 *    include in the query.
 *  @param partnerId partner id.
 *
 *  @returns GTLRAndroidProvisioningPartnerQuery_PartnersDevicesUpdateMetadataAsync
 */
+ (instancetype)queryWithObject:(GTLRAndroidProvisioningPartner_UpdateDeviceMetadataInBatchRequest *)object
                      partnerId:(long long)partnerId;

@end

NS_ASSUME_NONNULL_END
