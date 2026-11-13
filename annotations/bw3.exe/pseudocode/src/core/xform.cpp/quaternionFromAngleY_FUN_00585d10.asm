; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_quaternionFromAngleY_FUN_00585d10(float param_1)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[9]:
;   core_charactr.cpp_CCharacter_applyLookAt_FUN_00433000 at 00433061
;   core_charactr.cpp_FUN_0042cd70 at 0042cf0a
;   core_prye.cpp_CPrye_makeDrawDecision_FUN_0051e6d0 at 0051ebd9
;   core_prye.cpp_FUN_0051c1c0 at 0051c50e
;   core_prye.cpp_FUN_0051e280 at 0051e321
;   core_prye.cpp_FUN_0051ee10 at 0051ee54
;   core_skeleton.cpp_FUN_0054dfd0 at 0054e0e0
;   core_toxhand.cpp_CTheHand_process_FUN_0056c140 at 0056c813
;   core_zombiepriest.cpp_FUN_0058e8d0 at 0058ebde
;
; Referenced Globals:
;   undefined4 DAT_005d81ab
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00585d10
        ;   Label: core_xform.cpp_quaternionFromAngleY_FUN_00585d10
    SUB ESP,0x18                        ; 00585d11
    MOV EDX,ESI                         ; 00585d14
    FLD float ptr [ESP + 0x20]          ; 00585d16
    FMUL float ptr [0x005d81ab]         ; 00585d1a | DAT_005d81ab
    FLD ST0                             ; 00585d20
    FCOS                                ; 00585d22
    FXCH                                ; 00585d24
    FSIN                                ; 00585d26
    MOV EDI,ESI                         ; 00585d28
    XOR ECX,ECX                         ; 00585d2a
    MOV ESI,ESP                         ; 00585d2c
    MOV dword ptr [ESP + 0x4],ECX       ; 00585d2e
    MOV dword ptr [ESP + 0xc],ECX       ; 00585d32
    FXCH                                ; 00585d36
    FSTP float ptr [ESP]                ; 00585d38
    FSTP float ptr [ESP + 0x8]          ; 00585d3b
    MOVSD ES:EDI,ESI                    ; 00585d3f
    MOVSD ES:EDI,ESI                    ; 00585d40
    MOVSD ES:EDI,ESI                    ; 00585d41
    MOVSD ES:EDI,ESI                    ; 00585d42
    MOV EAX,EDX                         ; 00585d43
    ADD ESP,0x18                        ; 00585d45
    POP EDI                             ; 00585d48
    RET                                 ; 00585d49

