; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_box_cpp_CBox_process_FUN_0041e2f0(CBox *this_ptr,float delta_time)
;
; Parameters:
; CBox *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[5]:
;   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 at 00419d1b
;   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 at 00421c6f
;   core_fire.cpp_CToss_process_FUN_004c4000 at 004c4144
;   core_simbox.cpp_CSimBox_process_FUN_00588f20 at 005890a9
;   core_weapon.cpp_CWeapon_process_FUN_005ee110 at 005ee179
;
; Referenced Globals:
;   double g_BoxMaxTimestep = 0.0125000000000000
;   double g_BoxTimestepHalf = 0.5
;
; Called Functions:
;   core_box.cpp_CBox_processPhysics_FUN_0041e350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041e2f0
        ;   Label: core_box.cpp_CBox_process_FUN_0041e2f0
    PUSH EBP                            ; 0041e2f1
    MOV EBP,ESP                         ; 0041e2f2
    SUB ESP,0xc                         ; 0041e2f4
    AND ESP,0xfffffff8                  ; 0041e2f7
    MOV EBX,dword ptr [EBP + 0xc]       ; 0041e2fa
    FLD float ptr [EBP + 0x10]          ; 0041e2fd
    FST double ptr [ESP]                ; 0041e300
    FCOMP double ptr [0x006164bf]       ; 0041e303 | g_BoxMaxTimestep
    FNSTSW AX                           ; 0041e309
    SAHF                                ; 0041e30b
    JBE 0x0041e33a                      ; 0041e30c
        ;   XREF to: 0041e33a (CONDITIONAL_JUMP)  ; LAB_0041e33a
    FLD double ptr [ESP]                ; 0041e30e
    FMUL double ptr [0x006164c7]        ; 0041e311 | g_BoxTimestepHalf
    FSTP float ptr [ESP + 0x8]          ; 0041e317
    PUSH dword ptr [ESP + 0x8]          ; 0041e31b
    PUSH EBX                            ; 0041e31f
    CALL core_box.cpp_CBox_process_FUN_0041e2f0 ; 0041e320
        ;   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e2f0(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041e325
    PUSH dword ptr [ESP + 0x8]          ; 0041e328
    PUSH EBX                            ; 0041e32c
    CALL core_box.cpp_CBox_process_FUN_0041e2f0 ; 0041e32d
        ;   XREF to: 0041e2f0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_0041e2f0(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041e332
    MOV ESP,EBP                         ; 0041e335
    POP EBP                             ; 0041e337
    POP EBX                             ; 0041e338
    RET                                 ; 0041e339
    PUSH dword ptr [EBP + 0x10]         ; 0041e33a
        ;   Label: LAB_0041e33a
    PUSH EBX                            ; 0041e33d
    CALL core_box.cpp_CBox_processPhysics_FUN_0041e350 ; 0041e33e
        ;   XREF to: 0041e350 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_processPhysics_FUN_0041e350(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041e343
    MOV ESP,EBP                         ; 0041e346
    POP EBP                             ; 0041e348
    POP EBX                             ; 0041e349
    RET                                 ; 0041e34a

