; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGargoyle * __cdecl core_gargoyle_cpp_CGargoyle_ctor_FUN_004a7350(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gargoyle.cpp_FUN_004a7320 at 004a7333
;
; Referenced Globals:
;   TerminatedCString s_gargoyle_dfm_0058482a
;   float FLOAT_0059df40 = 50
;   float FLOAT_0059df44 = 100
;   undefined1* PTR_core_gargoyle.cpp_CGargoyle_setup_FUN_004a7450_0059df54 = 004a7450
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00479560
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7350
        ;   Label: core_gargoyle.cpp_CGargoyle_ctor_FUN_004a7350
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a7351
    PUSH EDX                            ; 004a7355
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00479560 ; 004a7356
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00479560(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004a735b
    PUSH 0x58482a                       ; 004a735e | = "gargoyle.dfm"
    MOV EBX,EAX                         ; 004a7363
    ADD EAX,0x150                       ; 004a7365
    PUSH EAX                            ; 004a736a
    MOV dword ptr [EAX + -0x4],0x59df54 ; 004a736b | PTR_core_gargoyle.cpp_CGargoyle_setup_FUN_004a7450_0059df54
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004a7372
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    MOV dword ptr [EBX + 0x2dd4],0x3f19999a ; 004a7377
    MOV dword ptr [EBX + 0x2dd8],0x3f19999a ; 004a7381
    MOV dword ptr [EBX + 0x2608],0x2    ; 004a738b
    MOV dword ptr [EBX + 0x2434],0x41f00000 ; 004a7395
    MOV dword ptr [EBX + 0x108],0xffff  ; 004a739f
    MOV dword ptr [EBX + 0x10c],0xffff  ; 004a73a9
    MOV dword ptr [EBX + 0x110],0xffff  ; 004a73b3
    MOV dword ptr [EBX + 0xbd6c],0xffff ; 004a73bd
    MOV dword ptr [EBX + 0xbd70],0xffff ; 004a73c7
    MOV dword ptr [EBX + 0xbd74],0xffff ; 004a73d1
    MOV dword ptr [EBX + 0xbd54],0x80   ; 004a73db
    MOV dword ptr [EBX + 0xbd58],0x80   ; 004a73e5
    MOV dword ptr [EBX + 0xbd5c],0x80   ; 004a73ef
    MOV dword ptr [EBX + 0xbd60],0x0    ; 004a73f9
    FLD float ptr [0x0059df40]          ; 004a7403 | FLOAT_0059df40
    MOV dword ptr [EBX + 0xbd78],0x0    ; 004a7409
    FLD float ptr [0x0059df44]          ; 004a7413 | FLOAT_0059df44
    MOV dword ptr [EBX + 0xbd7c],0x0    ; 004a7419
    ADD ESP,0x8                         ; 004a7423
    MOV dword ptr [EBX + 0x261c],0x0    ; 004a7426
    MOV EAX,EBX                         ; 004a7430
    FXCH                                ; 004a7432
    FSTP float ptr [EBX + 0x2ddc]       ; 004a7434
    FSTP float ptr [EBX + 0x2de0]       ; 004a743a
    POP EBX                             ; 004a7440
    RET                                 ; 004a7441

