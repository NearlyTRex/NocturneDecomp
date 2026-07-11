; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e31f0(undefined4 param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004e85b0 at 004e8c39
;
; Called Functions:
;   FUN_004e2ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e31f0
        ;   Label: FUN_004e31f0
    PUSH ESI                            ; 004e31f1
    PUSH EDI                            ; 004e31f2
    PUSH EBP                            ; 004e31f3
    SUB ESP,0x18                        ; 004e31f4
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e31f7
    MOV EBX,dword ptr [EAX + 0x18]      ; 004e31fb
    MOV EDI,dword ptr [EAX + 0x10]      ; 004e31fe
    MOV dword ptr [ESP + 0xc],EBX       ; 004e3201
    MOV EBX,dword ptr [EAX + 0x14]      ; 004e3205
    MOV EAX,dword ptr [EAX + 0x8]       ; 004e3208
    MOV dword ptr [ESP + 0x4],EBX       ; 004e320b
    MOV dword ptr [ESP],EAX             ; 004e320f
    TEST EBX,EBX                        ; 004e3212
    JLE 0x004e3284                      ; 004e3214
        ;   XREF to: 004e3284 (CONDITIONAL_JUMP)  ; LAB_004e3284
    MOV dword ptr [ESP + 0x10],EAX      ; 004e3216
    XOR ECX,ECX                         ; 004e321a
    LEA EAX,[EBX*0x4 + 0x0]             ; 004e321c
    MOV dword ptr [ESP + 0x14],ECX      ; 004e3223
    MOV dword ptr [ESP + 0x8],EAX       ; 004e3227
    XOR ESI,ESI                         ; 004e322b
        ;   Label: LAB_004e322b
    TEST EDI,EDI                        ; 004e322d
    JLE 0x004e3263                      ; 004e322f
        ;   XREF to: 004e3263 (CONDITIONAL_JUMP)  ; LAB_004e3263
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e3231
    MOV EAX,dword ptr [ESP + 0x30]      ; 004e3235
    MOV EBP,dword ptr [ESP + 0x10]      ; 004e3239
    ADD EBX,EAX                         ; 004e323d
    MOV EDX,dword ptr [EBP + 0x4]       ; 004e323f
        ;   Label: LAB_004e323f
    PUSH EDX                            ; 004e3242
    MOV ECX,dword ptr [ESP + 0x30]      ; 004e3243
    PUSH ECX                            ; 004e3247
    CALL FUN_004e2ac0                   ; 004e3248
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e324d
    ADD EBX,0x80                        ; 004e3250
    AND EAX,0xff                        ; 004e3256
    INC ESI                             ; 004e325b
    MOV dword ptr [EBX + -0x80],EAX     ; 004e325c
    CMP ESI,EDI                         ; 004e325f
    JL 0x004e323f                       ; 004e3261
        ;   XREF to: 004e323f (CONDITIONAL_JUMP)  ; LAB_004e323f
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e3263
        ;   Label: LAB_004e3263
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e3267
    MOV ESI,dword ptr [ESP + 0x8]       ; 004e326b
    ADD ECX,0x4                         ; 004e326f
    ADD EBX,0x100                       ; 004e3272
    MOV dword ptr [ESP + 0x14],ECX      ; 004e3278
    MOV dword ptr [ESP + 0x10],EBX      ; 004e327c
    CMP ECX,ESI                         ; 004e3280
    JL 0x004e322b                       ; 004e3282
        ;   XREF to: 004e322b (CONDITIONAL_JUMP)  ; LAB_004e322b
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e3284
        ;   Label: LAB_004e3284
    MOV EBP,dword ptr [ESP + 0x4]       ; 004e3288
    CMP EBP,EDX                         ; 004e328c
    JGE 0x004e32e0                      ; 004e328e
        ;   XREF to: 004e32e0 (CONDITIONAL_JUMP)  ; LAB_004e32e0
    MOV ESI,dword ptr [ESP + 0x30]      ; 004e3290
    LEA EBX,[EBP*0x4 + 0x0]             ; 004e3294
    ADD EBX,ESI                         ; 004e329b
    MOV ESI,EBP                         ; 004e329d
    MOV EAX,dword ptr [ESP]             ; 004e329f
    SHL ESI,0x8                         ; 004e32a2
    ADD ESI,EAX                         ; 004e32a5
    MOV EAX,dword ptr [ESI + 0x4]       ; 004e32a7
        ;   Label: LAB_004e32a7
    PUSH EAX                            ; 004e32aa
    MOV EDX,dword ptr [ESP + 0x30]      ; 004e32ab
    PUSH EDX                            ; 004e32af
    CALL FUN_004e2ac0                   ; 004e32b0
        ;   XREF to: 004e2ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e2ac0()
    ADD ESP,0x8                         ; 004e32b5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e32b8
    ADD EBX,0x4                         ; 004e32bc
    AND EAX,0xff                        ; 004e32bf
    ADD ESI,0x100                       ; 004e32c4
    MOV dword ptr [EBX + 0x7c],EAX      ; 004e32ca
    INC EBP                             ; 004e32cd
    MOV dword ptr [EBX + -0x4],EAX      ; 004e32ce
    CMP EBP,ECX                         ; 004e32d1
    JL 0x004e32a7                       ; 004e32d3
        ;   XREF to: 004e32a7 (CONDITIONAL_JUMP)  ; LAB_004e32a7
    LEA EAX,[EAX]                       ; 004e32d5
    LEA EDX,[EDX]                       ; 004e32db
    MOV EBX,EBX                         ; 004e32de
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e32e0
        ;   Label: LAB_004e32e0
    CMP EBX,0x20                        ; 004e32e4
    JGE 0x004e3318                      ; 004e32e7
        ;   XREF to: 004e3318 (CONDITIONAL_JUMP)  ; LAB_004e3318
    LEA ESI,[EBX*0x4 + 0x0]             ; 004e32e9
    XOR EAX,EAX                         ; 004e32f0
        ;   Label: LAB_004e32f0
    TEST EDI,EDI                        ; 004e32f2
    JLE 0x004e330d                      ; 004e32f4
        ;   XREF to: 004e330d (CONDITIONAL_JUMP)  ; LAB_004e330d
    MOV EBX,dword ptr [ESP + 0x30]      ; 004e32f6
    ADD EBX,ESI                         ; 004e32fa
    INC EAX                             ; 004e32fc
        ;   Label: LAB_004e32fc
    MOV dword ptr [EBX],0x0             ; 004e32fd
    ADD EBX,0x80                        ; 004e3303
    CMP EAX,EDI                         ; 004e3309
    JL 0x004e32fc                       ; 004e330b
        ;   XREF to: 004e32fc (CONDITIONAL_JUMP)  ; LAB_004e32fc
    ADD ESI,0x4                         ; 004e330d
        ;   Label: LAB_004e330d
    CMP ESI,0x80                        ; 004e3310
    JL 0x004e32f0                       ; 004e3316
        ;   XREF to: 004e32f0 (CONDITIONAL_JUMP)  ; LAB_004e32f0
    ADD ESP,0x18                        ; 004e3318
        ;   Label: LAB_004e3318
    POP EBP                             ; 004e331b
    POP EDI                             ; 004e331c
    POP ESI                             ; 004e331d
    POP EBX                             ; 004e331e
    RET                                 ; 004e331f

