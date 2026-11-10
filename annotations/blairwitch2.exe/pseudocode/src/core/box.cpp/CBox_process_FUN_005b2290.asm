; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_process_FUN_005b2290(CBox *this_ptr,float delta_time)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   core_bodypart.cpp_CBodyPart_process_FUN_004162b0 at 004163c6
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090 at 0041c342
;   core_fire.cpp_CToss_process_FUN_004993f0 at 00499555
;   core_simbox.cpp_CSimBox_process_FUN_005401b0 at 0054034b
;   core_weapon.cpp_CWeapon_process_FUN_00589c80 at 00589ce9
;
; Referenced Globals:
;   undefined4 DAT_005f12d8
;   undefined4 DAT_005f12e0
;
; Called Functions:
;   core_box.cpp_CBox_processPhysics_FUN_005b22f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2290
        ;   Label: core_box.cpp_CBox_process_FUN_005b2290
    PUSH EBP                            ; 005b2291
    MOV EBP,ESP                         ; 005b2292
    SUB ESP,0xc                         ; 005b2294
    AND ESP,0xfffffff8                  ; 005b2297
    MOV EBX,dword ptr [EBP + 0xc]       ; 005b229a
    FLD float ptr [EBP + 0x10]          ; 005b229d
    FST double ptr [ESP]                ; 005b22a0
    FCOMP double ptr [0x005f12d8]       ; 005b22a3 | DAT_005f12d8
    FNSTSW AX                           ; 005b22a9
    SAHF                                ; 005b22ab
    JBE 0x005b22da                      ; 005b22ac
        ;   XREF to: 005b22da (CONDITIONAL_JUMP)  ; LAB_005b22da
    FLD double ptr [ESP]                ; 005b22ae
    FMUL double ptr [0x005f12e0]        ; 005b22b1 | DAT_005f12e0
    FSTP float ptr [ESP + 0x8]          ; 005b22b7
    PUSH dword ptr [ESP + 0x8]          ; 005b22bb
    PUSH EBX                            ; 005b22bf
    CALL core_box.cpp_CBox_process_FUN_005b2290 ; 005b22c0
        ;   XREF to: 005b2290 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_005b2290(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005b22c5
    PUSH dword ptr [ESP + 0x8]          ; 005b22c8
    PUSH EBX                            ; 005b22cc
    CALL core_box.cpp_CBox_process_FUN_005b2290 ; 005b22cd
        ;   XREF to: 005b2290 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_005b2290(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005b22d2
    MOV ESP,EBP                         ; 005b22d5
    POP EBP                             ; 005b22d7
    POP EBX                             ; 005b22d8
    RET                                 ; 005b22d9
    PUSH dword ptr [EBP + 0x10]         ; 005b22da
        ;   Label: LAB_005b22da
    PUSH EBX                            ; 005b22dd
    CALL core_box.cpp_CBox_processPhysics_FUN_005b22f0 ; 005b22de
        ;   XREF to: 005b22f0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_processPhysics_FUN_005b22f0(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005b22e3
    MOV ESP,EBP                         ; 005b22e6
    POP EBP                             ; 005b22e8
    POP EBX                             ; 005b22e9
    RET                                 ; 005b22ea

