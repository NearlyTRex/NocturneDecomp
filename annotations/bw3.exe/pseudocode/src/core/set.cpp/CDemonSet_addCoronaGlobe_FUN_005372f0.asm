; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet *this_ptr,CDemonGlobe *globe)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonGlobe *    Stack[0x8]:4   globe
;
; XREF[11]:
;   core_boxactor.cpp_CLightActor_process_FUN_00420420 at 00420548
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_0042f510 at 0042f631
;   core_emitter.cpp_CEmitter_process_FUN_00487eb0 at 00488043
;   core_exorcism.cpp_CExorcism_process_FUN_0048a420 at 0048acee
;   core_fire.cpp_CFireball_process_FUN_00499350 at 00499401
;   core_fire.cpp_FUN_0049a390 at 0049a3d4
;   core_firestff.cpp_CFirestaff_process_FUN_004a4dc0 at 004a56a5
;   core_keyactor.cpp_CKeyActor_process_FUN_004de8b0 at 004de93e
;   core_lightsta.cpp_CLightStaff_process_FUN_004e2050 at 004e22e4
;   core_shadow.cpp_FUN_005438d0 at 00544489
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_0203ad30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0203ad30]      ; 005372f0 | DAT_0203ad30
        ;   Label: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005372f6
    CMP dword ptr [ECX + 0xc],0x100     ; 005372fa
    JL 0x00537308                       ; 00537301
        ;   XREF to: 00537308 (CONDITIONAL_JUMP)  ; LAB_00537308
    CMP EDX,0x64                        ; 00537303
    JL 0x0053730f                       ; 00537306
        ;   XREF to: 0053730f (CONDITIONAL_JUMP)  ; LAB_0053730f
    MOV dword ptr [0x0203ad30],EDX      ; 00537308 | DAT_0203ad30
        ;   Label: LAB_00537308
    RET                                 ; 0053730e
    INC EDX                             ; 0053730f
        ;   Label: LAB_0053730f
    MOV dword ptr [EDX*0x4 + 0x203ad30],ECX ; 00537310 | DAT_0203ad30
    MOV dword ptr [0x0203ad30],EDX      ; 00537317 | DAT_0203ad30
    RET                                 ; 0053731d

