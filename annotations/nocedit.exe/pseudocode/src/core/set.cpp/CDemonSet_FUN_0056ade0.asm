; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_0056ade0(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_emitter.cpp_FUN_004a8070 at 004a82a5
;   core_grave.cpp_FUN_004ee790 at 004ee7de
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b1a1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ade0
        ;   Label: core_set.cpp_CDemonSet_FUN_0056ade0
    MOV ECX,dword ptr [ESP + 0xc]       ; 0056ade1
    LEA EDX,[ECX + 0x128]               ; 0056ade5
    LEA EAX,[ECX + 0x20]                ; 0056adeb
    MOV dword ptr [ECX + 0x140],0x1f    ; 0056adee
    CMP EDX,EAX                         ; 0056adf8
    JNZ 0x0056ae15                      ; 0056adfa | LAB_0056ae15
        ;   XREF to: 0056ae15 (CONDITIONAL_JUMP)
    LEA EDX,[ECX + 0x134]               ; 0056adfc
        ;   Label: LAB_0056adfc
    LEA EAX,[ECX + 0x30]                ; 0056ae02
    CMP EDX,EAX                         ; 0056ae05
    JNZ 0x0056ae27                      ; 0056ae07 | LAB_0056ae27
        ;   XREF to: 0056ae27 (CONDITIONAL_JUMP)
    MOV dword ptr [ECX + 0x144],0x0     ; 0056ae09
    POP EBX                             ; 0056ae13
    RET                                 ; 0056ae14
    MOV EBX,dword ptr [EAX]             ; 0056ae15
        ;   Label: LAB_0056ae15
    MOV dword ptr [EDX],EBX             ; 0056ae17
    MOV EBX,dword ptr [EAX + 0x4]       ; 0056ae19
    MOV dword ptr [EDX + 0x4],EBX       ; 0056ae1c
    MOV EBX,dword ptr [EAX + 0x8]       ; 0056ae1f
    MOV dword ptr [EDX + 0x8],EBX       ; 0056ae22
    JMP 0x0056adfc                      ; 0056ae25 | LAB_0056adfc
        ;   XREF to: 0056adfc (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [EAX]             ; 0056ae27
        ;   Label: LAB_0056ae27
    MOV dword ptr [EDX],EBX             ; 0056ae29
    MOV EBX,dword ptr [EAX + 0x4]       ; 0056ae2b
    MOV dword ptr [EDX + 0x4],EBX       ; 0056ae2e
    MOV EBX,dword ptr [EAX + 0x8]       ; 0056ae31
    MOV dword ptr [EDX + 0x8],EBX       ; 0056ae34
    MOV dword ptr [ECX + 0x144],0x0     ; 0056ae37
    POP EBX                             ; 0056ae41
    RET                                 ; 0056ae42

