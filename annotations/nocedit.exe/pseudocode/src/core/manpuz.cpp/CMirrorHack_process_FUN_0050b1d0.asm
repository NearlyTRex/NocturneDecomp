; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_manpuz_cpp_CMirrorHack_process_FUN_0050b1d0(CMirrorHack *this_ptr,float delta_time)
;
; Parameters:
; CMirrorHack *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double DOUBLE_00635925 = 6.28318530700000
;   double DOUBLE_0063592d = 30
;   double DOUBLE_00635935 = 0.200000000000000
;   CKeys* g_CKeysPtr = 02dcd7d4
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b1d0
        ;   Label: core_manpuz.cpp_CMirrorHack_process_FUN_0050b1d0
    PUSH EBP                            ; 0050b1d1
    MOV EBP,ESP                         ; 0050b1d2
    SUB ESP,0x4                         ; 0050b1d4
    AND ESP,0xfffffff8                  ; 0050b1d7
    MOV EBX,dword ptr [EBP + 0xc]       ; 0050b1da
    FLD float ptr [EBP + 0x10]          ; 0050b1dd
    FMUL double ptr [0x00635925]        ; 0050b1e0 | DOUBLE_00635925
    FDIV double ptr [0x0063592d]        ; 0050b1e6 | DOUBLE_0063592d
    PUSH 0x38                           ; 0050b1ec
    MOV EAX,[0x0067cf44]                ; 0050b1ee | g_CKeysPtr
    PUSH EAX                            ; 0050b1f3 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0050b1f4 | g_CKeysInstance
    FSTP float ptr [ESP + 0x8]          ; 0050b1f6
    CALL dword ptr [EDX]                ; 0050b1fa
    ADD ESP,0x8                         ; 0050b1fc
    TEST EAX,EAX                        ; 0050b1ff
    JZ 0x0050b20f                       ; 0050b201
        ;   XREF to: 0050b20f (CONDITIONAL_JUMP)  ; LAB_0050b20f
    FLD float ptr [ESP]                 ; 0050b203
    FMUL double ptr [0x00635935]        ; 0050b206 | DOUBLE_00635935
    FSTP float ptr [ESP]                ; 0050b20c
    PUSH 0x33                           ; 0050b20f
        ;   Label: LAB_0050b20f
    MOV EAX,[0x0067cf44]                ; 0050b211 | g_CKeysPtr
    PUSH EAX                            ; 0050b216 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0050b217 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0050b219
    ADD ESP,0x8                         ; 0050b21b
    TEST EAX,EAX                        ; 0050b21e
    JZ 0x0050b22b                       ; 0050b220
        ;   XREF to: 0050b22b (CONDITIONAL_JUMP)  ; LAB_0050b22b
    FLD float ptr [EBX + 0x34]          ; 0050b222
    FSUB float ptr [ESP]                ; 0050b225
    FSTP float ptr [EBX + 0x34]         ; 0050b228
    PUSH 0x34                           ; 0050b22b
        ;   Label: LAB_0050b22b
    MOV EAX,[0x0067cf44]                ; 0050b22d | g_CKeysPtr
    PUSH EAX                            ; 0050b232 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 0050b233 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 0050b235
    ADD ESP,0x8                         ; 0050b237
    TEST EAX,EAX                        ; 0050b23a
    JZ 0x0050b247                       ; 0050b23c
        ;   XREF to: 0050b247 (CONDITIONAL_JUMP)  ; LAB_0050b247
    FLD float ptr [EBX + 0x34]          ; 0050b23e
    FADD float ptr [ESP]                ; 0050b241
    FSTP float ptr [EBX + 0x34]         ; 0050b244
    PUSH EBX                            ; 0050b247
        ;   Label: LAB_0050b247
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 0050b248
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050b24d
    MOV ESP,EBP                         ; 0050b250
    POP EBP                             ; 0050b252
    POP EBX                             ; 0050b253
    RET                                 ; 0050b254

