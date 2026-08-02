; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_0056f220(uint param_1)
;
;
; XREF[5]:
;   crt_io.c_extend_file_for_append_FUN_00572f40 at 00572f85
;   crt_io.c_write_FUN_0057301c at 00573052
;   crt_stdio.c_lseek_FUN_005689c0 at 005689f1
;   crt_unknown.c_FUN_00569fb0 at 00569ff3
;   crt_unknown.c_ReadFileBytesMaybe_FUN_005733e0 at 00573420
;
; Referenced Globals:
;   undefined4 DAT_005c1f90
;   undefined4 DAT_005c1f94
;   undefined4 DAT_005c1f95
;   void* PTR_DAT_005c1fe4 = 005c1f94
;
; Called Functions:
;   crt_io.c_IsSpecialDevice_FUN_005705c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f220
        ;   Label: crt_unknown.c_FUN_0056f220
    PUSH ESI                            ; 0056f221
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056f222
    CMP EBX,dword ptr [0x005c1f90]      ; 0056f226 | DAT_005c1f90
    JC 0x0056f233                       ; 0056f22c
        ;   XREF to: 0056f233 (CONDITIONAL_JUMP)  ; LAB_0056f233
    XOR EAX,EAX                         ; 0056f22e
    POP ESI                             ; 0056f230
    POP EBX                             ; 0056f231
    RET                                 ; 0056f232
    CMP EBX,0x3                         ; 0056f233
        ;   Label: LAB_0056f233
    JGE 0x0056f26d                      ; 0056f236
        ;   XREF to: 0056f26d (CONDITIONAL_JUMP)  ; LAB_0056f26d
    MOV EAX,[0x005c1fe4]                ; 0056f238 | PTR_DAT_005c1fe4
    LEA ESI,[EBX*0x4 + 0x0]             ; 0056f23d
    ADD EAX,ESI                         ; 0056f244
    MOV DL,byte ptr [EAX + 0x1]         ; 0056f246 | DAT_005c1f95
    TEST DL,0x40                        ; 0056f249
    JNZ 0x0056f26d                      ; 0056f24c
        ;   XREF to: 0056f26d (CONDITIONAL_JUMP)  ; LAB_0056f26d
    MOV DH,DL                           ; 0056f24e
    OR DH,0x40                          ; 0056f250
    PUSH EBX                            ; 0056f253
    MOV byte ptr [EAX + 0x1],DH         ; 0056f254 | DAT_005c1f95
    CALL crt_io.c_IsSpecialDevice_FUN_005705c0 ; 0056f257
        ;   XREF to: 005705c0 (UNCONDITIONAL_CALL)  ; int crt_io.c_IsSpecialDevice_FUN_005705c0(int handle_index)
    ADD ESP,0x4                         ; 0056f25c
    TEST EAX,EAX                        ; 0056f25f
    JZ 0x0056f26d                       ; 0056f261
        ;   XREF to: 0056f26d (CONDITIONAL_JUMP)  ; LAB_0056f26d
    MOV EAX,[0x005c1fe4]                ; 0056f263 | PTR_DAT_005c1fe4
    OR byte ptr [ESI + EAX*0x1 + 0x1],0x20 ; 0056f268 | DAT_005c1f95
    MOV EAX,[0x005c1fe4]                ; 0056f26d | PTR_DAT_005c1fe4
        ;   Label: LAB_0056f26d
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 0056f272 | DAT_005c1f94
    POP ESI                             ; 0056f275
    POP EBX                             ; 0056f276
    RET                                 ; 0056f277

