; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_004405d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[3]:
;   core_inv.cpp_drawItemIconBackground_FUN_004c1f90 at 004c2137
;   core_inv.cpp_drawWeaponIconBackground_FUN_004c1dd0 at 004c1f77
;   core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010 at 0050c1aa
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004405d0
        ;   Label: core_dcamera.cpp_FUN_004405d0
    MOV EDX,dword ptr [EAX + 0x1d0]     ; 004405d4
    CMP EDX,0x100                       ; 004405da
    JL 0x004405e9                       ; 004405e0
        ;   XREF to: 004405e9 (CONDITIONAL_JUMP)  ; LAB_004405e9
    INC dword ptr [EAX + 0x1d0]         ; 004405e2
    RET                                 ; 004405e8
    PUSH EDI                            ; 004405e9
        ;   Label: LAB_004405e9
    PUSH ESI                            ; 004405ea
    SHL EDX,0x4                         ; 004405eb
    LEA ESI,[ESP + 0x10]                ; 004405ee
    LEA EDI,[EDX + EAX*0x1 + 0x1d4]     ; 004405f2
    MOVSD ES:EDI,ESI                    ; 004405f9
    MOVSD ES:EDI,ESI                    ; 004405fa
    MOVSD ES:EDI,ESI                    ; 004405fb
    MOVSD ES:EDI,ESI                    ; 004405fc
    POP ESI                             ; 004405fd
    POP EDI                             ; 004405fe
    INC dword ptr [EAX + 0x1d0]         ; 004405ff
    RET                                 ; 00440605

