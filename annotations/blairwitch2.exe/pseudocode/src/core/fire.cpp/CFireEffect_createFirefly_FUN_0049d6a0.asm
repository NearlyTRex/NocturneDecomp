; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createFirefly_FUN_0049d6a0(CFireEffect *this_ptr,CVector3f *param_2,CVector3f *param_3,int param_4,int param_5,int param_6,int param_7,float param_8,float param_9)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
; int              Stack[0x14]:4   param_5
; int              Stack[0x18]:4   param_6
; int              Stack[0x1c]:4   param_7
; float            Stack[0x20]:4   param_8
; float            Stack[0x24]:4   param_9
;
; XREF[2]:
;   core_construc.cpp_CConstruct_process_FUN_00436e80 at 0043723a
;   core_emitter.cpp_CEmitter_process_FUN_00486cb0 at 00486f9b
;
; Referenced Globals:
;   undefined4 DAT_01c848f4
;   undefined4 CFirefly_ARRAY_01c848f8[0].base.vtable
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d6a0
        ;   Label: core_fire.cpp_CFireEffect_createFirefly_FUN_0049d6a0
    PUSH EDI                            ; 0049d6a1
    PUSH EBP                            ; 0049d6a2
    MOV EBX,dword ptr [0x01c848f4]      ; 0049d6a3 | DAT_01c848f4
    LEA EAX,[EBX*0x4 + 0x0]             ; 0049d6a9
    SUB EAX,EBX                         ; 0049d6b0
    MOV EDX,dword ptr [0x01c848f4]      ; 0049d6b2 | DAT_01c848f4
    SHL EAX,0x3                         ; 0049d6b8
    INC EDX                             ; 0049d6bb
    SUB EAX,EBX                         ; 0049d6bc
    MOV EBX,0x1c848f8                   ; 0049d6be
    SHL EAX,0x2                         ; 0049d6c3
    MOV dword ptr [0x01c848f4],EDX      ; 0049d6c6 | DAT_01c848f4
    ADD EBX,EAX                         ; 0049d6cc
    CMP EDX,0x40                        ; 0049d6ce
    JL 0x0049d6dd                       ; 0049d6d1
        ;   XREF to: 0049d6dd (CONDITIONAL_JUMP)  ; LAB_0049d6dd
    PUSH ESI                            ; 0049d6d3
    XOR ESI,ESI                         ; 0049d6d4
    MOV dword ptr [0x01c848f4],ESI      ; 0049d6d6 | DAT_01c848f4
    POP ESI                             ; 0049d6dc
    MOV EDI,dword ptr [ESP + 0x18]      ; 0049d6dd
        ;   Label: LAB_0049d6dd
    PUSH EDI                            ; 0049d6e1
    MOV EBP,dword ptr [ESP + 0x18]      ; 0049d6e2
    PUSH EBP                            ; 0049d6e6
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0049d6e7 | CFirefly_ARRAY_01c848f8[0].base.vtable
    PUSH EBX                            ; 0049d6ea
    CALL dword ptr [EAX]                ; 0049d6eb
    ADD ESP,0xc                         ; 0049d6ed
    PUSH 0xffff                         ; 0049d6f0
    PUSH 0xc000                         ; 0049d6f5
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0049d6fa
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0049d6ff
    MOV EDX,EAX                         ; 0049d702
    MOV EAX,dword ptr [ESP + 0x20]      ; 0049d704
    IMUL EDX                            ; 0049d708
    SHRD EAX,EDX,0x10                   ; 0049d70a
    MOV dword ptr [EBX + 0x40],EAX      ; 0049d70e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049d711
    MOV dword ptr [EBX + 0x44],EAX      ; 0049d715
    MOV EAX,dword ptr [ESP + 0x24]      ; 0049d718
    MOV dword ptr [EBX + 0x54],EAX      ; 0049d71c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049d71f
    MOV dword ptr [EBX + 0x58],EAX      ; 0049d723
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049d726
    MOV dword ptr [EBX + 0x48],EAX      ; 0049d72a
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049d72d
    MOV dword ptr [EBX + 0x50],EAX      ; 0049d731
    LEA EAX,[EBX + 0xc]                 ; 0049d734
    MOV dword ptr [EBX + 0x4c],0x0      ; 0049d737
    MOV dword ptr [EAX + 0x8],0x0       ; 0049d73e
    MOV EDX,dword ptr [EAX + 0x8]       ; 0049d745
    MOV dword ptr [EAX + 0x4],EDX       ; 0049d748
    MOV EDX,dword ptr [EAX + 0x4]       ; 0049d74b
    MOV dword ptr [EAX],EDX             ; 0049d74e
    MOV dword ptr [EBX + 0x20],0x0      ; 0049d750
    MOV EAX,dword ptr [EBX + 0x20]      ; 0049d757
    MOV dword ptr [EBX + 0x1c],EAX      ; 0049d75a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0049d75d
    MOV dword ptr [EBX + 0x18],EAX      ; 0049d760
    POP EBP                             ; 0049d763
    POP EDI                             ; 0049d764
    POP EBX                             ; 0049d765
    RET                                 ; 0049d766

