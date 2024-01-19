#pragma once


#include "Base/Definitions.h"
#include "Base/Bytehook.h"
#include "Base/VClass.h"
#include "Base/NormalClass.h"
#include "Base/StringUtils.h"
#include "Base/Logging.h"
#include "Base/KeyValues.h"

#include "Enums.h"

#include "Entities/CHandle.h"
#include "Entities/CDOTABaseNPCHero.h"
#include "Entities/CDOTAPlayerController.h"
#include "Entities/CDOTAModifier.h"
#include "Entities/CDOTAItem.h"

#include "Interfaces/GC/CEconItem.h"
#include "Interfaces/GC/CEconWearable.h"
#include "Interfaces/GC/ItemSchema.h"
#include "Interfaces/GC/CGCClient.h"

#include "Protobufs/dota_clientmessages.pb.h"
#include "Protobufs/dota_commonmessages.pb.h"
#include "Protobufs/dota_gcmessages_msgid.pb.h"
#include "Protobufs/dota_gcmessages_common.pb.h"
#include "Protobufs/dota_shared_enums.pb.h"
#include "Protobufs/dota_usermessages.pb.h"
#include "Protobufs/econ_gcmessages.pb.h"
#include "Protobufs/econ_shared_enums.pb.h"
#include "Protobufs/gcsdk_gcmessages.pb.h"
#include "Protobufs/netmessages.pb.h"
#include "Protobufs/networkbasetypes.pb.h"
#include "Protobufs/network_connection.pb.h"
#include "Protobufs/steammessages.pb.h"
#include "Protobufs/steammessages_steamlearn.steamworkssdk.pb.h"
#include "Protobufs/steammessages_unified_base.steamworkssdk.pb.h"
#include "Protobufs/usermessages.pb.h"