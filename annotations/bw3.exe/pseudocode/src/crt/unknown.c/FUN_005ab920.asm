; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005ab920(uint param_1)
;
;
; XREF[4]:
;   crt_unknown.c_FUN_005a9cf0 at 005a9d21
;   crt_unknown.c_FUN_005aac30 at 005aac73
;   crt_unknown.c_FUN_005ab480 at 005ab4c5
;   crt_unknown.c_FUN_005ab55c at 005ab592
;
; Referenced Globals:
;   undefined4 DAT_00607b84
;   undefined4 DAT_00607b88
;   undefined4 DAT_00607b89
;   void* PTR_DAT_00607bd8 = 00607b88
;
; Called Functions:
;   crt_unknown.c_FUN_005aeb30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab920
        ;   Label: crt_unknown.c_FUN_005ab920
    PUSH ESI                            ; 005ab921
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ab922
    CMP EBX,dword ptr [0x00607b84]      ; 005ab926 | DAT_00607b84
    JC 0x005ab933                       ; 005ab92c
        ;   XREF to: 005ab933 (CONDITIONAL_JUMP)  ; LAB_005ab933
    XOR EAX,EAX                         ; 005ab92e
    POP ESI                             ; 005ab930
    POP EBX                             ; 005ab931
    RET                                 ; 005ab932
    CMP EBX,0x3                         ; 005ab933
        ;   Label: LAB_005ab933
    JGE 0x005ab96d                      ; 005ab936
        ;   XREF to: 005ab96d (CONDITIONAL_JUMP)  ; LAB_005ab96d
    MOV EAX,[0x00607bd8]                ; 005ab938 | PTR_DAT_00607bd8
    LEA ESI,[EBX*0x4 + 0x0]             ; 005ab93d
    ADD EAX,ESI                         ; 005ab944
    MOV DL,byte ptr [EAX + 0x1]         ; 005ab946 | DAT_00607b89
    TEST DL,0x40                        ; 005ab949
    JNZ 0x005ab96d                      ; 005ab94c
        ;   XREF to: 005ab96d (CONDITIONAL_JUMP)  ; LAB_005ab96d
    MOV DH,DL                           ; 005ab94e
    OR DH,0x40                          ; 005ab950
    PUSH EBX                            ; 005ab953
    MOV byte ptr [EAX + 0x1],DH         ; 005ab954 | DAT_00607b89
    CALL crt_unknown.c_FUN_005aeb30     ; 005ab957
        ;   XREF to: 005aeb30 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aeb30()
    ADD ESP,0x4                         ; 005ab95c
    TEST EAX,EAX                        ; 005ab95f
    JZ 0x005ab96d                       ; 005ab961
        ;   XREF to: 005ab96d (CONDITIONAL_JUMP)  ; LAB_005ab96d
    MOV EAX,[0x00607bd8]                ; 005ab963 | PTR_DAT_00607bd8
    OR byte ptr [ESI + EAX*0x1 + 0x1],0x20 ; 005ab968 | DAT_00607b89
    MOV EAX,[0x00607bd8]                ; 005ab96d | PTR_DAT_00607bd8
        ;   Label: LAB_005ab96d
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 005ab972 | DAT_00607b88
    POP ESI                             ; 005ab975
    POP EBX                             ; 005ab976
    RET                                 ; 005ab977

