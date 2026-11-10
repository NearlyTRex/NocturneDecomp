; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe *this_ptr,CVector3f *position)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
;
; XREF[12]:
;   core_boxactor.cpp_CLightActor_process_FUN_00420420 at 004204f6
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_0042f510 at 0042f5ec
;   core_emitter.cpp_CEmitter_process_FUN_00487eb0 at 00487ff0
;   core_exorcism.cpp_CExorcism_process_FUN_0048a420 at 0048acc1
;   core_fire.cpp_CFireball_process_FUN_00499350 at 004993b9
;   core_fire.cpp_FUN_0049a390 at 0049a3a4
;   core_firestff.cpp_CFirestaff_process_FUN_004a4dc0 at 004a5637
;   core_flame.cpp_FUN_004a6dd0 at 004a6e0b
;   core_keyactor.cpp_CKeyActor_process_FUN_004de8b0 at 004de8da
;   core_lightsta.cpp_CLightStaff_process_FUN_004e2050 at 004e2252
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_005bafd1
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0045aae0
        ;   Label: core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0045aae4
    LEA EDX,[ECX + 0x24]                ; 0045aae8
    CMP EDX,EAX                         ; 0045aaeb
    JNZ 0x0045ab19                      ; 0045aaed
        ;   XREF to: 0045ab19 (CONDITIONAL_JUMP)  ; LAB_0045ab19
    FLD double ptr [0x005bafd1]         ; 0045aaef | DAT_005bafd1
        ;   Label: LAB_0045aaef
    FLD float ptr [EAX]                 ; 0045aaf5
    FMUL ST1                            ; 0045aaf7
    CALL crt_math.c_round_FUN_005a3120  ; 0045aaf9
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ECX]               ; 0045aafe
    FLD float ptr [EAX + 0x4]           ; 0045ab00
    FMUL ST1                            ; 0045ab03
    CALL crt_math.c_round_FUN_005a3120  ; 0045ab05
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ECX + 0x4]         ; 0045ab0a
    FMUL float ptr [EAX + 0x8]          ; 0045ab0d
    CALL crt_math.c_round_FUN_005a3120  ; 0045ab10
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ECX + 0x8]         ; 0045ab15
    RET                                 ; 0045ab18
    PUSH EBX                            ; 0045ab19
        ;   Label: LAB_0045ab19
    MOV EBX,dword ptr [EAX]             ; 0045ab1a
    MOV dword ptr [EDX],EBX             ; 0045ab1c
    MOV EBX,dword ptr [EAX + 0x4]       ; 0045ab1e
    MOV dword ptr [EDX + 0x4],EBX       ; 0045ab21
    MOV EBX,dword ptr [EAX + 0x8]       ; 0045ab24
    MOV dword ptr [EDX + 0x8],EBX       ; 0045ab27
    POP EBX                             ; 0045ab2a
    JMP 0x0045aaef                      ; 0045ab2b
        ;   XREF to: 0045aaef (UNCONDITIONAL_JUMP)  ; LAB_0045aaef

