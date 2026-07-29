; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_initNetPacket_FUN_004edc80(SNetPacketHeader *packet,int packet_size,uchar packet_type)
;
; Parameters:
; SNetPacketHeader * Stack[0x4]:4   packet
; int              Stack[0x8]:4   packet_size
; uchar            Stack[0xc]:1   packet_type
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edc80
        ;   Label: core_netgame.cpp_initNetPacket_FUN_004edc80
    MOV EDX,dword ptr [ESP + 0x8]       ; 004edc84
    MOV dword ptr [EAX],EDX             ; 004edc88
    MOV DL,byte ptr [ESP + 0xc]         ; 004edc8a
    MOV byte ptr [EAX + 0x4],DL         ; 004edc8e
    RET                                 ; 004edc91

