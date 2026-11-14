; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_process_FUN_0041e0d0(CBox *this_ptr,float delta_time)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   core_bodypart.cpp_CBodyPart_process_FUN_00419740 at 00419856
;   core_boxactor.cpp_CBoxActor_process_FUN_00422000 at 004222b2
;   core_fire.cpp_CToss_process_FUN_004b1d90 at 004b1ef5
;   core_simbox.cpp_CSimBox_process_FUN_005627a0 at 0056293a
;   core_weapon.cpp_CWeapon_process_FUN_005ad770 at 005ad7d9
;
; Referenced Globals:
;   undefined4 DAT_005d4a98
;   undefined4 DAT_005d4aa0
;
; Called Functions:
;   core_box.cpp_CBox_processPhysics_FUN_0041e130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e0d0
        ;   Label: core_box.cpp_CBox_process_FUN_0041e0d0
    PUSH EBP                            ; 0041e0d1
    MOV EBP,ESP                         ; 0041e0d2
    SUB ESP,0xc                         ; 0041e0d4
    AND ESP,0xfffffff8                  ; 0041e0d7
    MOV EBX,dword ptr [EBP + 0xc]       ; 0041e0da
    FLD float ptr [EBP + 0x10]          ; 0041e0dd
    FST double ptr [ESP]                ; 0041e0e0
    FCOMP double ptr [0x005d4a98]       ; 0041e0e3 | DAT_005d4a98
    FNSTSW AX                           ; 0041e0e9
    SAHF                                ; 0041e0eb
    JBE 0x0041e11a                      ; 0041e0ec
        ;   XREF to: 0041e11a (CONDITIONAL_JUMP)  ; LAB_0041e11a
    FLD double ptr [ESP]                ; 0041e0ee
    FMUL double ptr [0x005d4aa0]        ; 0041e0f1 | DAT_005d4aa0
    FSTP float ptr [ESP + 0x8]          ; 0041e0f7
    PUSH dword ptr [ESP + 0x8]          ; 0041e0fb
    PUSH EBX                            ; 0041e0ff
    CALL core_box.cpp_CBox_process_FUN_0041e0d0 ; 0041e100
        ;   XREF to: 0041e0d0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e0d0(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041e105
    PUSH dword ptr [ESP + 0x8]          ; 0041e108
    PUSH EBX                            ; 0041e10c
    CALL core_box.cpp_CBox_process_FUN_0041e0d0 ; 0041e10d
        ;   XREF to: 0041e0d0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e0d0(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041e112
    MOV ESP,EBP                         ; 0041e115
    POP EBP                             ; 0041e117
    POP EBX                             ; 0041e118
    RET                                 ; 0041e119
    PUSH dword ptr [EBP + 0x10]         ; 0041e11a
        ;   Label: LAB_0041e11a
    PUSH EBX                            ; 0041e11d
    CALL core_box.cpp_CBox_processPhysics_FUN_0041e130 ; 0041e11e
        ;   XREF to: 0041e130 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_processPhysics_FUN_0041e130(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041e123
    MOV ESP,EBP                         ; 0041e126
    POP EBP                             ; 0041e128
    POP EBX                             ; 0041e129
    RET                                 ; 0041e12a

