; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_0054f060(CDemonSet *this_ptr,CDemonActor *actor)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
;
; XREF[5]:
;   core_demnfolk.cpp_FUN_00459100 at 0045aec3
;   core_emitter.cpp_FUN_0049f310 at 0049f563
;   core_glass.cpp_FUN_004e34b0 at 004e38c6
;   core_grave.cpp_CGrave_startAnimation_FUN_004e6bf0 at 004e6c3e
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f238
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f060
        ;   Label: core_set.cpp_FUN_0054f060
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054f061
    LEA EDX,[ECX + 0x12c]               ; 0054f065
    LEA EAX,[ECX + 0x20]                ; 0054f06b
    MOV dword ptr [ECX + 0x144],0x1f    ; 0054f06e
    CMP EDX,EAX                         ; 0054f078
    JNZ 0x0054f095                      ; 0054f07a
        ;   XREF to: 0054f095 (CONDITIONAL_JUMP)  ; LAB_0054f095
    LEA EDX,[ECX + 0x138]               ; 0054f07c
        ;   Label: LAB_0054f07c
    LEA EAX,[ECX + 0x30]                ; 0054f082
    CMP EDX,EAX                         ; 0054f085
    JNZ 0x0054f0a7                      ; 0054f087
        ;   XREF to: 0054f0a7 (CONDITIONAL_JUMP)  ; LAB_0054f0a7
    MOV dword ptr [ECX + 0x148],0x0     ; 0054f089
    POP EBX                             ; 0054f093
    RET                                 ; 0054f094
    MOV EBX,dword ptr [EAX]             ; 0054f095
        ;   Label: LAB_0054f095
    MOV dword ptr [EDX],EBX             ; 0054f097
    MOV EBX,dword ptr [EAX + 0x4]       ; 0054f099
    MOV dword ptr [EDX + 0x4],EBX       ; 0054f09c
    MOV EBX,dword ptr [EAX + 0x8]       ; 0054f09f
    MOV dword ptr [EDX + 0x8],EBX       ; 0054f0a2
    JMP 0x0054f07c                      ; 0054f0a5
        ;   XREF to: 0054f07c (UNCONDITIONAL_JUMP)  ; LAB_0054f07c
    MOV EBX,dword ptr [EAX]             ; 0054f0a7
        ;   Label: LAB_0054f0a7
    MOV dword ptr [EDX],EBX             ; 0054f0a9
    MOV EBX,dword ptr [EAX + 0x4]       ; 0054f0ab
    MOV dword ptr [EDX + 0x4],EBX       ; 0054f0ae
    MOV EBX,dword ptr [EAX + 0x8]       ; 0054f0b1
    MOV dword ptr [EDX + 0x8],EBX       ; 0054f0b4
    MOV dword ptr [ECX + 0x148],0x0     ; 0054f0b7
    POP EBX                             ; 0054f0c1
    RET                                 ; 0054f0c2

