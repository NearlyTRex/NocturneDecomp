; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_stdio_c_stream_valid_FUN_00608cd1(_FILE *stream,int operation_type)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
; int              Stack[0x8]:4   operation_type
;
; XREF[3]:
;   crt_stdio.c_fgetc_buffered_FUN_0060d510 at 0060d519
;   crt_unknown.c_FUN_00600ee4 at 00600eec
;   crt_unknown.c_FUN_0060d576 at 0060d584
;
; Called Functions:
;   crt_stdio.c_stream_setup_FUN_00605f20
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00608cd1
        ;   Label: crt_stdio.c_stream_valid_FUN_00608cd1
    CMP dword ptr [ESP + 0x8],0x0       ; 00608cd5
    JZ 0x00608cfb                       ; 00608cda
        ;   XREF to: 00608cfb (CONDITIONAL_JUMP)  ; LAB_00608cfb
    MOV EDX,dword ptr [EAX]             ; 00608cdc
        ;   Label: LAB_00608cdc
    MOV EDX,dword ptr [EDX + 0x4]       ; 00608cde
    CMP dword ptr [EDX + EAX*0x1 + 0x10],0x0 ; 00608ce1
    JNZ 0x00608d09                      ; 00608ce6
        ;   XREF to: 00608d09 (CONDITIONAL_JUMP)  ; LAB_00608d09
    MOV EDX,dword ptr [EAX]             ; 00608ce8
    MOV EDX,dword ptr [EDX + 0x4]       ; 00608cea
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0x8] ; 00608ced
    TEST EDX,EDX                        ; 00608cf1
    JNZ 0x00608d09                      ; 00608cf3
        ;   XREF to: 00608d09 (CONDITIONAL_JUMP)  ; LAB_00608d09
    MOV EAX,0x1                         ; 00608cf5
    RET                                 ; 00608cfa
    MOV EDX,dword ptr [EAX]             ; 00608cfb
        ;   Label: LAB_00608cfb
    MOV EDX,dword ptr [EDX + 0x4]       ; 00608cfd
    MOV EDX,dword ptr [EDX + EAX*0x1 + 0xc] ; 00608d00
    TEST DL,0x1                         ; 00608d04
    JZ 0x00608cdc                       ; 00608d07
        ;   XREF to: 00608cdc (CONDITIONAL_JUMP)  ; LAB_00608cdc
    PUSH EBX                            ; 00608d09
        ;   Label: LAB_00608d09
    MOV EBX,dword ptr [ESP + 0xc]       ; 00608d0a
    PUSH EBX                            ; 00608d0e
    PUSH EAX                            ; 00608d0f
    CALL crt_stdio.c_stream_setup_FUN_00605f20 ; 00608d10
        ;   XREF to: 00605f20 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_stream_setup_FUN_00605f20(_FILE * stream, int operation_type)
    ADD ESP,0x8                         ; 00608d15
    POP EBX                             ; 00608d18
    RET                                 ; 00608d19

