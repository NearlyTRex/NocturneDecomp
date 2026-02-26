; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_initNetPacket_FUN_00543b00(SNetPacketHeader *packet,int packet_size,uchar packet_type)
;
; Parameters:
; SNetPacketHeader * Stack[0x4]:4   packet
; int              Stack[0x8]:4   packet_size
; uchar            Stack[0xc]:1   packet_type
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00543b00
        ;   Label: core_netgame.cpp_initNetPacket_FUN_00543b00
    MOV EDX,dword ptr [ESP + 0x8]       ; 00543b04
    MOV dword ptr [EAX],EDX             ; 00543b08
    MOV DL,byte ptr [ESP + 0xc]         ; 00543b0a
    MOV byte ptr [EAX + 0x4],DL         ; 00543b0e
    RET                                 ; 00543b11

