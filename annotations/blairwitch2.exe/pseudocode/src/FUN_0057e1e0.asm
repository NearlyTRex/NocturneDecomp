; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0057e1e0(undefined4 *param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_005fd4d4 = 0057e1e0
;   undefined4 DAT_005fd4f0
;
; Called Functions:
;   FUN_0057d860
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057e1e0
        ;   Label: FUN_0057e1e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057e1e1
    TEST byte ptr [ESP + 0xc],0x4       ; 0057e1e5
    JNZ 0x0057e20c                      ; 0057e1ea
        ;   XREF to: 0057e20c (CONDITIONAL_JUMP)  ; LAB_0057e20c
    PUSH 0x1                            ; 0057e1ec
    PUSH EBX                            ; 0057e1ee
    MOV dword ptr [EBX],0x5fd4d4        ; 0057e1ef | PTR_FUN_005fd4d4
    CALL FUN_0057d860                   ; 0057e1f5
        ;   XREF to: 0057d860 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d860()
    ADD ESP,0x8                         ; 0057e1fa
    MOV DL,byte ptr [ESP + 0xc]         ; 0057e1fd
    MOV EBX,EAX                         ; 0057e201
    TEST DL,0x2                         ; 0057e203
    JNZ 0x0057e227                      ; 0057e206
        ;   XREF to: 0057e227 (CONDITIONAL_JUMP)  ; LAB_0057e227
    MOV EAX,EBX                         ; 0057e208
    POP EBX                             ; 0057e20a
    RET                                 ; 0057e20b
    PUSH 0x5fd4f0                       ; 0057e20c | DAT_005fd4f0
        ;   Label: LAB_0057e20c
    PUSH EBX                            ; 0057e211
    CALL FUN_005b7fa7                   ; 0057e212
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0057e217
    PUSH EAX                            ; 0057e21a
    CALL FUN_005b7fce                   ; 0057e21b
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0057e220
    MOV EAX,EBX                         ; 0057e223
    POP EBX                             ; 0057e225
    RET                                 ; 0057e226
    PUSH EAX                            ; 0057e227
        ;   Label: LAB_0057e227
    CALL FUN_005b7fdc                   ; 0057e228
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0057e22d
    MOV EAX,EBX                         ; 0057e230
    POP EBX                             ; 0057e232
    RET                                 ; 0057e233

