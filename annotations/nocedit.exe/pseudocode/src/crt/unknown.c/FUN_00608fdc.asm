; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown int crt_unknown_c_FUN_00608fdc(void)
;
;
; XREF[1]:
;   crt_unknown.c_staticFinal_FUN_00608fc0 at 00608fc2
;
; Referenced Globals:
;   _FILE* g_StaticFilePoolStart = 00000000
;   undefined4 DAT_00684d12
;   FileListNode* g_AllocatedListHead
;
; Called Functions:
;   crt_stdio.c___CClose_FUN_00601ee4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608fdc
        ;   Label: crt_unknown.c_FUN_00608fdc
    PUSH ESI                            ; 00608fdd
    PUSH EDI                            ; 00608fde
    MOV EDX,dword ptr [ESP + 0x10]      ; 00608fdf
    LEA EAX,[EDX*0x4 + 0x0]             ; 00608fe3
    SUB EAX,EDX                         ; 00608fea
    SHL EAX,0x2                         ; 00608fec
    ADD EAX,EDX                         ; 00608fef
    MOV EDI,0x684cc4                    ; 00608ff1 | g_StaticFilePoolStart
    ADD EAX,EAX                         ; 00608ff6
    ADD EDI,EAX                         ; 00608ff8
    MOV EAX,[0x03f9b200]                ; 00608ffa | g_AllocatedListHead
    XOR EBX,EBX                         ; 00608fff
    TEST EAX,EAX                        ; 00609001
    JZ 0x0060903a                       ; 00609003
        ;   XREF to: 0060903a (CONDITIONAL_JUMP)  ; LAB_0060903a
    MOV ESI,dword ptr [EAX]             ; 00609005
        ;   Label: LAB_00609005
    MOV EAX,dword ptr [EAX + 0x4]       ; 00609007
    MOV CL,byte ptr [EAX + 0xd]         ; 0060900a
    MOV EDX,0x1                         ; 0060900d
    TEST CL,0x40                        ; 00609012
    JNZ 0x00609029                      ; 00609015
        ;   XREF to: 00609029 (CONDITIONAL_JUMP)  ; LAB_00609029
    TEST CL,0x8                         ; 00609017
    JNZ 0x00609029                      ; 0060901a
        ;   XREF to: 00609029 (CONDITIONAL_JUMP)  ; LAB_00609029
    CMP EAX,EDI                         ; 0060901c
    JC 0x00609034                       ; 0060901e
        ;   XREF to: 00609034 (CONDITIONAL_JUMP)  ; LAB_00609034
    CMP EAX,0x684d12                    ; 00609020 | DAT_00684d12
    JNC 0x00609029                      ; 00609025
        ;   XREF to: 00609029 (CONDITIONAL_JUMP)  ; LAB_00609029
    XOR EDX,EDX                         ; 00609027
    PUSH EDX                            ; 00609029
        ;   Label: LAB_00609029
    PUSH EAX                            ; 0060902a
    INC EBX                             ; 0060902b
    CALL crt_stdio.c___CClose_FUN_00601ee4 ; 0060902c
        ;   XREF to: 00601ee4 (UNCONDITIONAL_CALL)  ; int crt_stdio.c___CClose_FUN_00601ee4(_FILE * file_handle, int close_flags)
    ADD ESP,0x8                         ; 00609031
    MOV EAX,ESI                         ; 00609034
        ;   Label: LAB_00609034
    TEST ESI,ESI                        ; 00609036
    JNZ 0x00609005                      ; 00609038
        ;   XREF to: 00609005 (CONDITIONAL_JUMP)  ; LAB_00609005
    MOV EAX,EBX                         ; 0060903a
        ;   Label: LAB_0060903a
    POP EDI                             ; 0060903c
    POP ESI                             ; 0060903d
    POP EBX                             ; 0060903e
    RET                                 ; 0060903f

