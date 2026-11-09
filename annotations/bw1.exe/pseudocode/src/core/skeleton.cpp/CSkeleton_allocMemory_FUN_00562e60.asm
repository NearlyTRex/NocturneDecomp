; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CSkeleton_allocMemory_FUN_00562e60(CSkeleton *this_ptr,int bone_count,int frame_count)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_count
; int              Stack[0xc]:4   frame_count
;
; XREF[1]:
;   core_skeleton.cpp_CSkeleton_loadStream_FUN_00563090 at 00563180
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f1ac9
;   TerminatedCString s_Too_bony_005f1ade
;   TerminatedCString s_core_skeleton_cpp_005f1ae8
;   TerminatedCString s_Out_of_hunk_in_CSkeleton_005f1afd
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_FUN_00562f70
;   crt_unknown.c_FUN_005c1268
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562e60
        ;   Label: core_skeleton.cpp_CSkeleton_allocMemory_FUN_00562e60
    PUSH ESI                            ; 00562e61
    PUSH EBP                            ; 00562e62
    MOV EBX,dword ptr [ESP + 0x10]      ; 00562e63
    PUSH 0x0                            ; 00562e67
    PUSH EBX                            ; 00562e69
    CALL core_skeleton.cpp_FUN_00562f70 ; 00562e6a
        ;   XREF to: 00562f70 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00562f70()
    ADD ESP,0x8                         ; 00562e6f
    CMP dword ptr [ESP + 0x14],0x64     ; 00562e72
    JLE 0x00562e9c                      ; 00562e77
        ;   XREF to: 00562e9c (CONDITIONAL_JUMP)  ; LAB_00562e9c
    MOV ECX,0x5f1ac9                    ; 00562e79 | = "..\\core\\skeleton.cpp"
    MOV ESI,0xc8                        ; 00562e7e
    PUSH 0x5f1ade                       ; 00562e83 | = "Too bony!"
    MOV dword ptr [0x01d1d400],ECX      ; 00562e88 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00562e8e | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00562e94
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00562e99
    MOV EAX,dword ptr [ESP + 0x14]      ; 00562e9c
        ;   Label: LAB_00562e9c
    MOV dword ptr [EBX + 0x1de78],EAX   ; 00562ea0
    MOV EAX,dword ptr [ESP + 0x18]      ; 00562ea6
    MOV dword ptr [EBX + 0x1ec8c],EAX   ; 00562eaa
    MOV EAX,dword ptr [EBX + 0x1de78]   ; 00562eb0
    IMUL EAX,dword ptr [EBX + 0x1ec8c]  ; 00562eb6
    SHL EAX,0x4                         ; 00562ebd
    PUSH EAX                            ; 00562ec0
    CALL crt_unknown.c_FUN_005c1268     ; 00562ec1
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    MOV EDX,dword ptr [EBX + 0x1ec8c]   ; 00562ec6
    MOV dword ptr [EBX + 0x1ec90],EAX   ; 00562ecc
    LEA EAX,[EDX*0x4 + 0x0]             ; 00562ed2
    SUB EAX,EDX                         ; 00562ed9
    ADD ESP,0x4                         ; 00562edb
    SHL EAX,0x2                         ; 00562ede
    PUSH EAX                            ; 00562ee1
    CALL crt_unknown.c_FUN_005c1268     ; 00562ee2
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    MOV EDX,dword ptr [EBX + 0x1ec8c]   ; 00562ee7
    MOV dword ptr [EBX + 0x1ec94],EAX   ; 00562eed
    LEA EAX,[EDX*0x4 + 0x0]             ; 00562ef3
    SUB EAX,EDX                         ; 00562efa
    ADD ESP,0x4                         ; 00562efc
    SHL EAX,0x2                         ; 00562eff
    PUSH EAX                            ; 00562f02
    CALL crt_unknown.c_FUN_005c1268     ; 00562f03
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1268()
    ADD ESP,0x4                         ; 00562f08
    MOV EBP,dword ptr [EBX + 0x1ec90]   ; 00562f0b
    MOV dword ptr [EBX + 0x1ec98],EAX   ; 00562f11
    TEST EBP,EBP                        ; 00562f17
    JZ 0x00562f31                       ; 00562f19
        ;   XREF to: 00562f31 (CONDITIONAL_JUMP)  ; LAB_00562f31
    CMP dword ptr [EBX + 0x1ec94],0x0   ; 00562f1b
    JZ 0x00562f31                       ; 00562f22
        ;   XREF to: 00562f31 (CONDITIONAL_JUMP)  ; LAB_00562f31
    CMP dword ptr [EBX + 0x1ec98],0x0   ; 00562f24
    JZ 0x00562f31                       ; 00562f2b
        ;   XREF to: 00562f31 (CONDITIONAL_JUMP)  ; LAB_00562f31
    POP EBP                             ; 00562f2d
    POP ESI                             ; 00562f2e
    POP EBX                             ; 00562f2f
    RET                                 ; 00562f30
    PUSH EDI                            ; 00562f31
        ;   Label: LAB_00562f31
    MOV EDI,dword ptr [EBX + 0x1ec8c]   ; 00562f32
    PUSH EDI                            ; 00562f38
    MOV EBP,dword ptr [EBX + 0x1de78]   ; 00562f39
    PUSH EBP                            ; 00562f3f
    MOV ECX,0x5f1ae8                    ; 00562f40 | = "..\\core\\skeleton.cpp"
    MOV ESI,0xdc                        ; 00562f45
    PUSH 0x5f1afd                       ; 00562f4a | = "Out of hunk in CSkeleton::allocMemory..."
    MOV dword ptr [0x01d1d400],ECX      ; 00562f4f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00562f55 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00562f5b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0xc                         ; 00562f60
    POP EDI                             ; 00562f63
    POP EBP                             ; 00562f64
    POP ESI                             ; 00562f65
    POP EBX                             ; 00562f66
    RET                                 ; 00562f67

