; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040a0d0(void)
;
;
; Referenced Globals:
;   string s_..\\core\\actor.cpp_00577642
;   string s_CDemonActor::customIntersectCyli_00577654
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x577642                    ; 0040a0d0 | = "..\\core\\actor.cpp"
        ;   Label: FUN_0040a0d0
    MOV ECX,0x29b                       ; 0040a0d5
    PUSH 0x577654                       ; 0040a0da | = "CDemonActor::customIntersectCylinderX..."
    MOV dword ptr [0x01cc4800],EDX      ; 0040a0df | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040a0e5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040a0eb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0040a0f0
    RET                                 ; 0040a0f3

