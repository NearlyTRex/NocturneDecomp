; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_005a1240(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1240
        ;   Label: FUN_005a1240
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a1241
    MOV ECX,dword ptr [EAX + 0x8]       ; 005a1245
    MOV EDX,dword ptr [EAX + 0xc]       ; 005a1248
    CMP EDX,ECX                         ; 005a124b
    JGE 0x005a125f                      ; 005a124d
        ;   XREF to: 005a125f (CONDITIONAL_JUMP)  ; LAB_005a125f
    MOV EBX,dword ptr [EAX + 0x4]       ; 005a124f
    TEST EBX,EBX                        ; 005a1252
    JNZ 0x005a1268                      ; 005a1254
        ;   XREF to: 005a1268 (CONDITIONAL_JUMP)  ; LAB_005a1268
    MOV EDX,0xfffffffe                  ; 005a1256
    MOV EAX,EDX                         ; 005a125b
    POP EBX                             ; 005a125d
    RET                                 ; 005a125e
    MOV EDX,0xffffffff                  ; 005a125f
        ;   Label: LAB_005a125f
    MOV EAX,EDX                         ; 005a1264
    POP EBX                             ; 005a1266
    RET                                 ; 005a1267
    PUSH EDI                            ; 005a1268
        ;   Label: LAB_005a1268
    PUSH ESI                            ; 005a1269
    MOV ESI,EDX                         ; 005a126a
    ADD EDX,EBX                         ; 005a126c
    MOV DL,byte ptr [EDX]               ; 005a126e
    LEA EDI,[ESI + 0x1]                 ; 005a1270
    AND EDX,0xff                        ; 005a1273
    MOV dword ptr [EAX + 0xc],EDI       ; 005a1279
    POP ESI                             ; 005a127c
    POP EDI                             ; 005a127d
    MOV EAX,EDX                         ; 005a127e
    POP EBX                             ; 005a1280
    RET                                 ; 005a1281

