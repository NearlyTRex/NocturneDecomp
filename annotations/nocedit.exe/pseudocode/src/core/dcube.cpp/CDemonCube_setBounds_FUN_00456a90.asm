; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90(CDemonCube * this_ptr, CVector3f * min_bounds, CVector3f * max_bounds)
;
; Parameters:
; CDemonCube *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   min_bounds
; CVector3f *      Stack[0xc]:4   max_bounds
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 at 00495796
;
; Referenced Globals:
;   int g_VertexCount
;   int g_PolygonCount
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 00456a90
        ;   Label: core_dcube.cpp_CDemonCube_setBounds_FUN_00456a90
    MOV ECX,dword ptr [ESP + 0xc]       ; 00456a94
    MOV EAX,dword ptr [ESP + 0x4]       ; 00456a98
    ADD EAX,0x8                         ; 00456a9c
    CMP EAX,EDX                         ; 00456a9f
    JNZ 0x00456abd                      ; 00456aa1
        ;   XREF to: 00456abd (CONDITIONAL_JUMP)  ; LAB_00456abd
    MOV EAX,dword ptr [ESP + 0x4]       ; 00456aa3
        ;   Label: LAB_00456aa3
    ADD EAX,0x14                        ; 00456aa7
    CMP EAX,ECX                         ; 00456aaa
    JNZ 0x00456ad1                      ; 00456aac
        ;   XREF to: 00456ad1 (CONDITIONAL_JUMP)  ; LAB_00456ad1
    XOR EDX,EDX                         ; 00456aae
    MOV dword ptr [0x016e990c],EDX      ; 00456ab0 | g_PolygonCount
    MOV dword ptr [0x01626408],EDX      ; 00456ab6 | g_VertexCount
    RET                                 ; 00456abc
    PUSH EBX                            ; 00456abd
        ;   Label: LAB_00456abd
    MOV EBX,dword ptr [EDX]             ; 00456abe
    MOV dword ptr [EAX],EBX             ; 00456ac0
    MOV EBX,dword ptr [EDX + 0x4]       ; 00456ac2
    MOV dword ptr [EAX + 0x4],EBX       ; 00456ac5
    MOV EBX,dword ptr [EDX + 0x8]       ; 00456ac8
    MOV dword ptr [EAX + 0x8],EBX       ; 00456acb
    POP EBX                             ; 00456ace
    JMP 0x00456aa3                      ; 00456acf
        ;   XREF to: 00456aa3 (UNCONDITIONAL_JUMP)  ; LAB_00456aa3
    MOV EDX,dword ptr [ECX]             ; 00456ad1
        ;   Label: LAB_00456ad1
    MOV dword ptr [EAX],EDX             ; 00456ad3
    MOV EDX,dword ptr [ECX + 0x4]       ; 00456ad5
    MOV dword ptr [EAX + 0x4],EDX       ; 00456ad8
    MOV EDX,dword ptr [ECX + 0x8]       ; 00456adb
    MOV dword ptr [EAX + 0x8],EDX       ; 00456ade
    XOR EDX,EDX                         ; 00456ae1
    MOV dword ptr [0x016e990c],EDX      ; 00456ae3 | g_PolygonCount
    MOV dword ptr [0x01626408],EDX      ; 00456ae9 | g_VertexCount
    RET                                 ; 00456aef

