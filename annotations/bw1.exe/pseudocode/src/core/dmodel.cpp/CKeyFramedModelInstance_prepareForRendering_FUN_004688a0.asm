; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0(CKeyFramedModelInstance *this_ptr,float animation_frame,int render_flags)
;
; Parameters:
; CKeyFramedModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   animation_frame
; int              Stack[0xc]:4   render_flags
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[55]:
;   core_ammo.cpp_FUN_0040dc80 at 0040dce5
;   core_ammobox.cpp_FUN_0040e320 at 0040e3a3
;   core_anvil.cpp_FUN_0040e7b0 at 0040e832
;   core_backgnd.cpp_FUN_0040ef70 at 0040efd1
;   core_baron.cpp_FUN_004101f0 at 004102d0
;   core_bat.cpp_FUN_00410f70 at 00410fd9
;   core_battery.cpp_FUN_00414500 at 0041458a
;   core_bodypart.cpp_FUN_00418fc0 at 004190a7
;   core_boxactor.cpp_FUN_004224f0 at 004225b1
;   core_boxactor.cpp_FUN_00422600 at 004226c6
;   ... and 45 more
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 004688a0
        ;   Label: core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004688a0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004688a3
    MOV EDX,dword ptr [ESP + 0x10]      ; 004688a7
    FLD float ptr [ESP + 0xc]           ; 004688ab
    PUSH EDX                            ; 004688af
    CALL crt_math.c_round_FUN_005c03a0  ; 004688b0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EAX                            ; 004688b5
    FISTP dword ptr [ESP + 0x8]         ; 004688b6
    MOV ECX,dword ptr [ESP + 0x8]       ; 004688ba
    PUSH ECX                            ; 004688be
    PUSH EAX                            ; 004688bf
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 004688c0
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004688c5
    PUSH EAX                            ; 004688c8
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270 ; 004688c9
        ;   XREF to: 00467270 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00467270(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 004688ce
    ADD ESP,0x4                         ; 004688d1
    RET                                 ; 004688d4

