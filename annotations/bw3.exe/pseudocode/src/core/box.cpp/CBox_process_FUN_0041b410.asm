; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_process_FUN_0041b410(CBox *this_ptr,float delta_time)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   core_bodypart.cpp_FUN_00415350 at 00415466
;   core_boxactor.cpp_FUN_0041f360 at 0041f5c3
;   core_fire.cpp_FUN_0049d090 at 0049d24d
;   core_simbox.cpp_FUN_005473c0 at 0054755a
;   core_weapon.cpp_FUN_0057b160 at 0057b1c9
;
; Referenced Globals:
;   undefined4 DAT_005b7381
;   undefined4 DAT_005b7389
;
; Called Functions:
;   core_box.cpp_CBox_processPhysics_FUN_0041b470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041b410
        ;   Label: core_box.cpp_CBox_process_FUN_0041b410
    PUSH EBP                            ; 0041b411
    MOV EBP,ESP                         ; 0041b412
    SUB ESP,0xc                         ; 0041b414
    AND ESP,0xfffffff8                  ; 0041b417
    MOV EBX,dword ptr [EBP + 0xc]       ; 0041b41a
    FLD float ptr [EBP + 0x10]          ; 0041b41d
    FST double ptr [ESP]                ; 0041b420
    FCOMP double ptr [0x005b7381]       ; 0041b423 | DAT_005b7381
    FNSTSW AX                           ; 0041b429
    SAHF                                ; 0041b42b
    JBE 0x0041b45a                      ; 0041b42c
        ;   XREF to: 0041b45a (CONDITIONAL_JUMP)  ; LAB_0041b45a
    FLD double ptr [ESP]                ; 0041b42e
    FMUL double ptr [0x005b7389]        ; 0041b431 | DAT_005b7389
    FSTP float ptr [ESP + 0x8]          ; 0041b437
    PUSH dword ptr [ESP + 0x8]          ; 0041b43b
    PUSH EBX                            ; 0041b43f
    CALL core_box.cpp_CBox_process_FUN_0041b410 ; 0041b440
        ;   XREF to: 0041b410 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041b410(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041b445
    PUSH dword ptr [ESP + 0x8]          ; 0041b448
    PUSH EBX                            ; 0041b44c
    CALL core_box.cpp_CBox_process_FUN_0041b410 ; 0041b44d
        ;   XREF to: 0041b410 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041b410(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041b452
    MOV ESP,EBP                         ; 0041b455
    POP EBP                             ; 0041b457
    POP EBX                             ; 0041b458
    RET                                 ; 0041b459
    PUSH dword ptr [EBP + 0x10]         ; 0041b45a
        ;   Label: LAB_0041b45a
    PUSH EBX                            ; 0041b45d
    CALL core_box.cpp_CBox_processPhysics_FUN_0041b470 ; 0041b45e
        ;   XREF to: 0041b470 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_processPhysics_FUN_0041b470(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041b463
    MOV ESP,EBP                         ; 0041b466
    POP EBP                             ; 0041b468
    POP EBX                             ; 0041b469
    RET                                 ; 0041b46a

