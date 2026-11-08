; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00566380(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_00430060 at 00430145
;   FUN_00569810 at 00569868
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01ccf5d4
;
; Called Functions:
;   FUN_00420dc0
;   FUN_00483e60
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566380
        ;   Label: FUN_00566380
    SUB ESP,0x8                         ; 00566381
    MOV EBX,dword ptr [ESP + 0x10]      ; 00566384
    MOV EDX,dword ptr [0x00612560]      ; 00566388 | DAT_00612560
    PUSH EDX                            ; 0056638e | DAT_01bc120c
    CALL FUN_00483e60                   ; 0056638f
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 00566394
    TEST EAX,EAX                        ; 00566397
    JNZ 0x005663b5                      ; 00566399
        ;   XREF to: 005663b5 (CONDITIONAL_JUMP)  ; LAB_005663b5
    CMP dword ptr [EBX],0x1             ; 0056639b
    JLE 0x005663b0                      ; 0056639e
        ;   XREF to: 005663b0 (CONDITIONAL_JUMP)  ; LAB_005663b0
    MOV EAX,[0x0061d95c]                ; 005663a0 | DAT_0061d95c
    CMP dword ptr [EAX + 0x244],0x0     ; 005663a5 | DAT_01ccf5d4
    JZ 0x005663bd                       ; 005663ac
        ;   XREF to: 005663bd (CONDITIONAL_JUMP)  ; LAB_005663bd
    XOR EAX,EAX                         ; 005663ae
    ADD ESP,0x8                         ; 005663b0
        ;   Label: LAB_005663b0
    POP EBX                             ; 005663b3
    RET                                 ; 005663b4
    MOV EAX,dword ptr [EBX]             ; 005663b5
        ;   Label: LAB_005663b5
    DEC EAX                             ; 005663b7
    ADD ESP,0x8                         ; 005663b8
    POP EBX                             ; 005663bb
    RET                                 ; 005663bc
    PUSH EDI                            ; 005663bd
        ;   Label: LAB_005663bd
    MOV EDI,dword ptr [ESP + 0x18]      ; 005663be
    PUSH EDI                            ; 005663c2
    CALL FUN_00420dc0                   ; 005663c3
        ;   XREF to: 00420dc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00420dc0()
    MOV dword ptr [ESP + 0xc],EAX       ; 005663c8
    MOV ECX,dword ptr [EBX]             ; 005663cc
    FLD float ptr [ESP + 0xc]           ; 005663ce
    CALL FUN_005c03a0                   ; 005663d2
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    ADD ESP,0x4                         ; 005663d7
    DEC ECX                             ; 005663da
    FISTP dword ptr [ESP + 0x4]         ; 005663db
    TEST ECX,ECX                        ; 005663df
    JLE 0x005663fe                      ; 005663e1
        ;   XREF to: 005663fe (CONDITIONAL_JUMP)  ; LAB_005663fe
    LEA EDX,[ECX*0x8 + 0x0]             ; 005663e3
    ADD EDX,EBX                         ; 005663ea
    MOV EBX,dword ptr [ESP + 0x4]       ; 005663ec
    CMP dword ptr [EDX + 0x8],0x0       ; 005663f0
        ;   Label: LAB_005663f0
    JZ 0x00566406                       ; 005663f4
        ;   XREF to: 00566406 (CONDITIONAL_JUMP)  ; LAB_00566406
    DEC ECX                             ; 005663f6
    SUB EDX,0x8                         ; 005663f7
    TEST ECX,ECX                        ; 005663fa
    JG 0x005663f0                       ; 005663fc
        ;   XREF to: 005663f0 (CONDITIONAL_JUMP)  ; LAB_005663f0
    MOV EAX,ECX                         ; 005663fe
        ;   Label: LAB_005663fe
    POP EDI                             ; 00566400
    ADD ESP,0x8                         ; 00566401
    POP EBX                             ; 00566404
    RET                                 ; 00566405
    CMP EBX,dword ptr [EDX + 0x4]       ; 00566406
        ;   Label: LAB_00566406
    JL 0x005663fe                       ; 00566409
        ;   XREF to: 005663fe (CONDITIONAL_JUMP)  ; LAB_005663fe
    DEC ECX                             ; 0056640b
    SUB EDX,0x8                         ; 0056640c
    TEST ECX,ECX                        ; 0056640f
    JG 0x005663f0                       ; 00566411
        ;   XREF to: 005663f0 (CONDITIONAL_JUMP)  ; LAB_005663f0
    MOV EAX,ECX                         ; 00566413
    POP EDI                             ; 00566415
    ADD ESP,0x8                         ; 00566416
    POP EBX                             ; 00566419
    RET                                 ; 0056641a

