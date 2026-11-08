; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b3010(int param_1)
;
;
; XREF[8]:
;   FUN_004b5190 at 004b5252
;   FUN_004bdfb0 at 004be058
;   FUN_004be430 at 004be84a
;   FUN_004ebf10 at 004ebfcf
;   FUN_004ecc70 at 004eccb4
;   FUN_004ed260 at 004ed2a9
;   FUN_004ee1a0 at 004ee1ea
;   FUN_004ee3f0 at 004ee4c7
;
; Referenced Globals:
;   undefined4 DAT_005d72ef
;   undefined4 DAT_005d72f3
;   undefined4 DAT_006164a0
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01cb80d4
;
; Called Functions:
;   FUN_0058e9e0
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3010
        ;   Label: FUN_004b3010
    PUSH ESI                            ; 004b3011
    PUSH EDI                            ; 004b3012
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b3013
    CALL FUN_0058e9e0                   ; 004b3017
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058e9e0()
    MOV EDX,dword ptr [EBX + 0x27c]     ; 004b301c
    MOV ESI,EAX                         ; 004b3022
    SUB EAX,EDX                         ; 004b3024
    MOV EDX,EAX                         ; 004b3026
    MOV ECX,0x12                        ; 004b3028
    SAR EDX,0x1f                        ; 004b302d
    IDIV ECX                            ; 004b3030
    MOV dword ptr [EBX + 0x280],EAX     ; 004b3032
    TEST EAX,EAX                        ; 004b3038
    JL 0x004b3090                       ; 004b303a
        ;   XREF to: 004b3090 (CONDITIONAL_JUMP)  ; LAB_004b3090
    MOV dword ptr [EBX + 0x27c],ESI     ; 004b303c
        ;   Label: LAB_004b303c
    CMP dword ptr [EBX + 0x280],0x4000  ; 004b3042
    JG 0x004b309c                       ; 004b304c
        ;   XREF to: 004b309c (CONDITIONAL_JUMP)  ; LAB_004b309c
    FILD dword ptr [EBX + 0x280]        ; 004b304e
        ;   Label: LAB_004b304e
    FMUL float ptr [EBX + 0x208]        ; 004b3054
    MOV EDI,dword ptr [0x01cb80d4]      ; 004b305a | DAT_01cb80d4
    CALL FUN_005b7ff0                   ; 004b3060
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EBX + 0x280]       ; 004b3065
    TEST EDI,EDI                        ; 004b306b
    JNZ 0x004b30a8                      ; 004b306d
        ;   XREF to: 004b30a8 (CONDITIONAL_JUMP)  ; LAB_004b30a8
    FILD dword ptr [EBX + 0x280]        ; 004b306f
        ;   Label: LAB_004b306f
    MOV EAX,dword ptr [EBX + 0x280]     ; 004b3075
    FMUL double ptr [0x005d72f3]        ; 004b307b | DAT_005d72f3
    MOV [0x01c2a370],EAX                ; 004b3081 | DAT_01c2a370
    FSTP float ptr [EBX + 0x284]        ; 004b3086
    POP EDI                             ; 004b308c
    POP ESI                             ; 004b308d
    POP EBX                             ; 004b308e
    RET                                 ; 004b308f
    MOV dword ptr [EBX + 0x280],0x0     ; 004b3090
        ;   Label: LAB_004b3090
    JMP 0x004b303c                      ; 004b309a
        ;   XREF to: 004b303c (UNCONDITIONAL_JUMP)  ; LAB_004b303c
    MOV dword ptr [EBX + 0x280],0x4000  ; 004b309c
        ;   Label: LAB_004b309c
    JMP 0x004b304e                      ; 004b30a6
        ;   XREF to: 004b304e (UNCONDITIONAL_JUMP)  ; LAB_004b304e
    FLD float ptr [0x005d72ef]          ; 004b30a8 | DAT_005d72ef
        ;   Label: LAB_004b30a8
    FDIV float ptr [0x006164a0]         ; 004b30ae | DAT_006164a0
    FMUL float ptr [EBX + 0x208]        ; 004b30b4
    CALL FUN_005b7ff0                   ; 004b30ba
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EBX + 0x280]       ; 004b30bf
    JMP 0x004b306f                      ; 004b30c5
        ;   XREF to: 004b306f (UNCONDITIONAL_JUMP)  ; LAB_004b306f

