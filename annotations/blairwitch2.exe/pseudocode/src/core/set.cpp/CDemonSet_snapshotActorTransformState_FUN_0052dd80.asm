; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[4]:
;   core_emitter.cpp_CEmitter_process_FUN_00486cb0 at 00486f03
;   core_glass.cpp_FUN_004c6d40 at 004c7156
;   core_grave.cpp_CGrave_startAnimation_FUN_004ca3e0 at 004ca42e
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052df58
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052dd80
        ;   Label: core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0052dd80
    MOV ECX,dword ptr [ESP + 0xc]       ; 0052dd81
    LEA EDX,[ECX + 0x12c]               ; 0052dd85
    LEA EAX,[ECX + 0x20]                ; 0052dd8b
    MOV dword ptr [ECX + 0x144],0x1f    ; 0052dd8e
    CMP EDX,EAX                         ; 0052dd98
    JNZ 0x0052ddb5                      ; 0052dd9a
        ;   XREF to: 0052ddb5 (CONDITIONAL_JUMP)  ; LAB_0052ddb5
    LEA EDX,[ECX + 0x138]               ; 0052dd9c
        ;   Label: LAB_0052dd9c
    LEA EAX,[ECX + 0x30]                ; 0052dda2
    CMP EDX,EAX                         ; 0052dda5
    JNZ 0x0052ddc7                      ; 0052dda7
        ;   XREF to: 0052ddc7 (CONDITIONAL_JUMP)  ; LAB_0052ddc7
    MOV dword ptr [ECX + 0x148],0x0     ; 0052dda9
    POP EBX                             ; 0052ddb3
    RET                                 ; 0052ddb4
    MOV EBX,dword ptr [EAX]             ; 0052ddb5
        ;   Label: LAB_0052ddb5
    MOV dword ptr [EDX],EBX             ; 0052ddb7
    MOV EBX,dword ptr [EAX + 0x4]       ; 0052ddb9
    MOV dword ptr [EDX + 0x4],EBX       ; 0052ddbc
    MOV EBX,dword ptr [EAX + 0x8]       ; 0052ddbf
    MOV dword ptr [EDX + 0x8],EBX       ; 0052ddc2
    JMP 0x0052dd9c                      ; 0052ddc5
        ;   XREF to: 0052dd9c (UNCONDITIONAL_JUMP)  ; LAB_0052dd9c
    MOV EBX,dword ptr [EAX]             ; 0052ddc7
        ;   Label: LAB_0052ddc7
    MOV dword ptr [EDX],EBX             ; 0052ddc9
    MOV EBX,dword ptr [EAX + 0x4]       ; 0052ddcb
    MOV dword ptr [EDX + 0x4],EBX       ; 0052ddce
    MOV EBX,dword ptr [EAX + 0x8]       ; 0052ddd1
    MOV dword ptr [EDX + 0x8],EBX       ; 0052ddd4
    MOV dword ptr [ECX + 0x148],0x0     ; 0052ddd7
    POP EBX                             ; 0052dde1
    RET                                 ; 0052dde2

