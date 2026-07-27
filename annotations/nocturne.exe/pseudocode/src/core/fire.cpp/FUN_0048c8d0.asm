; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048c8d0(void)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   float FLOAT_0059d1f8 = 256
;
; Called Functions:
;   engine_special.cpp_transformPoint_FUN_00530a25
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c8d0
        ;   Label: core_fire.cpp_FUN_0048c8d0
    SUB ESP,0xc                         ; 0048c8d1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048c8d4
    MOV EBX,ESP                         ; 0048c8d8
    FLD float ptr [EAX]                 ; 0048c8da
    FMUL float ptr [0x0059d1f8]         ; 0048c8dc | FLOAT_0059d1f8
    FISTP dword ptr [EBX]               ; 0048c8e2
    FLD float ptr [EAX + 0x4]           ; 0048c8e4
    FMUL float ptr [0x0059d1f8]         ; 0048c8e7 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x4]         ; 0048c8ed
    FLD float ptr [EAX + 0x8]           ; 0048c8f0
    FMUL float ptr [0x0059d1f8]         ; 0048c8f3 | FLOAT_0059d1f8
    FISTP dword ptr [EBX + 0x8]         ; 0048c8f9
    MOV EBX,ESP                         ; 0048c8fc
    PUSH EBX                            ; 0048c8fe
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0048c8ff
    PUSH EDX                            ; 0048c903
    CALL engine_special.cpp_transformPoint_FUN_00530a25 ; 0048c904
        ;   XREF to: 00530a25 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformPoint_FUN_00530a25()
    ADD ESP,0x8                         ; 0048c909
    ADD ESP,0xc                         ; 0048c90c
    POP EBX                             ; 0048c90f
    RET                                 ; 0048c910

