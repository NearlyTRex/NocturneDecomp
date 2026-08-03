; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_00508890(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[3]:
;   core_emitter.cpp_CEmitter_process_FUN_00478790 at 004789c5
;   core_grave.cpp_CGrave_startAnimation_FUN_004b0dc0 at 004b0e0e
;   core_set.cpp_CDemonSet_setCameraView_FUN_005088f0 at 00508ae0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 00508890
        ;   Label: core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_00508890
    LEA EDX,[ECX + 0x128]               ; 00508894
    LEA EAX,[ECX + 0x20]                ; 0050889a
    MOV dword ptr [ECX + 0x140],0x1f    ; 0050889d
    CMP EDX,EAX                         ; 005088a7
    JNZ 0x005088b9                      ; 005088a9
        ;   XREF to: 005088b9 (CONDITIONAL_JUMP)  ; LAB_005088b9
    LEA EDX,[ECX + 0x134]               ; 005088ab
    LEA EAX,[ECX + 0x30]                ; 005088b1
    CMP EDX,EAX                         ; 005088b4
    JNZ 0x005088d9                      ; 005088b6
        ;   XREF to: 005088d9 (CONDITIONAL_JUMP)  ; LAB_005088d9
    RET                                 ; 005088b8
    PUSH EBX                            ; 005088b9
        ;   Label: LAB_005088b9
    MOV EBX,dword ptr [EAX]             ; 005088ba
    MOV dword ptr [EDX],EBX             ; 005088bc
    MOV EBX,dword ptr [EAX + 0x4]       ; 005088be
    MOV dword ptr [EDX + 0x4],EBX       ; 005088c1
    MOV EBX,dword ptr [EAX + 0x8]       ; 005088c4
    MOV dword ptr [EDX + 0x8],EBX       ; 005088c7
    POP EBX                             ; 005088ca
    LEA EDX,[ECX + 0x134]               ; 005088cb
    LEA EAX,[ECX + 0x30]                ; 005088d1
    CMP EDX,EAX                         ; 005088d4
    JNZ 0x005088d9                      ; 005088d6
        ;   XREF to: 005088d9 (CONDITIONAL_JUMP)  ; LAB_005088d9
    RET                                 ; 005088d8
    MOV ECX,dword ptr [EAX]             ; 005088d9
        ;   Label: LAB_005088d9
    MOV dword ptr [EDX],ECX             ; 005088db
    MOV ECX,dword ptr [EAX + 0x4]       ; 005088dd
    MOV dword ptr [EDX + 0x4],ECX       ; 005088e0
    MOV ECX,dword ptr [EAX + 0x8]       ; 005088e3
    MOV dword ptr [EDX + 0x8],ECX       ; 005088e6
    RET                                 ; 005088e9

