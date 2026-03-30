; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fire_cpp_CShell_onCollision_FUN_004c6380(CShell *this_ptr,CVector3f *collision_normal)
;
; Parameters:
; CShell *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   collision_normal
; Local Variables:
; float            Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   double DOUBLE_00629ff3 = 0.25
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c6380
        ;   Label: core_fire.cpp_CShell_onCollision_FUN_004c6380
    PUSH ESI                            ; 004c6381
    PUSH EDI                            ; 004c6382
    PUSH EBP                            ; 004c6383
    MOV EBP,ESP                         ; 004c6384
    SUB ESP,0x8                         ; 004c6386
    MOV EDI,dword ptr [EBP + 0x14]      ; 004c6389
    MOV EAX,0x4                         ; 004c638c
    MOV EDX,dword ptr [EDI + 0x50]      ; 004c6391
    SUB EAX,EDX                         ; 004c6394
    MOV dword ptr [EBP + -0x4],EAX      ; 004c6396
    FILD dword ptr [EBP + -0x4]         ; 004c6399
    FMUL double ptr [0x00629ff3]        ; 004c639c | DOUBLE_00629ff3
    FST float ptr [EBP + -0x8]          ; 004c63a2
    FLDZ                                ; 004c63a5
    FCOMPP                              ; 004c63a7
    FNSTSW AX                           ; 004c63a9
    SAHF                                ; 004c63ab
    JBE 0x004c63b3                      ; 004c63ac
        ;   XREF to: 004c63b3 (CONDITIONAL_JUMP)  ; LAB_004c63b3
    XOR ECX,ECX                         ; 004c63ae
    MOV dword ptr [EBP + -0x8],ECX      ; 004c63b0
    PUSH 0x40c90fdb                     ; 004c63b3
        ;   Label: LAB_004c63b3
    PUSH 0xc0c90fdb                     ; 004c63b8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c63bd
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)

