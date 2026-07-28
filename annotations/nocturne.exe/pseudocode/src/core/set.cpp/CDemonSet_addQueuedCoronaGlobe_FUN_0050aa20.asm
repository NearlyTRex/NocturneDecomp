; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20(CDemonSet *this_ptr,CDemonGlobe *globe)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonGlobe *    Stack[0x8]:4   globe
;
; XREF[1]:
;   core_flame.cpp_FUN_0048d5d0 at 0048d688
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005baf90
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cc9454
;   undefined4 DAT_01fba480
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0
;
; *****************************************************************************

section .text

    MOV EAX,[0x005baf90]                ; 0050aa20 | DAT_005baf90
        ;   Label: core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0050aa20
    CMP dword ptr [EAX + 0x4],0x0       ; 0050aa25 | DAT_01cc9454
    JNZ 0x0050aa36                      ; 0050aa29
        ;   XREF to: 0050aa36 (CONDITIONAL_JUMP)  ; LAB_0050aa36
    MOV ECX,dword ptr [0x01fba480]      ; 0050aa2b | DAT_01fba480
    CMP ECX,0x64                        ; 0050aa31
    JL 0x0050aa37                       ; 0050aa34
        ;   XREF to: 0050aa37 (CONDITIONAL_JUMP)  ; LAB_0050aa37
    RET                                 ; 0050aa36
        ;   Label: LAB_0050aa36
    PUSH ESI                            ; 0050aa37
        ;   Label: LAB_0050aa37
    PUSH EBX                            ; 0050aa38
    MOV EBX,dword ptr [0x005ae704]      ; 0050aa39 | DAT_005ae704
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050aa3f
    PUSH EBX                            ; 0050aa43 | DAT_01b4d738
    MOV dword ptr [ECX*0x4 + 0x1fba484],EDX ; 0050aa44
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0 ; 0050aa4b
        ;   XREF to: 004613b0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_004613b0(CDemonRenderer * this_ptr)
    MOV EDX,dword ptr [0x01fba480]      ; 0050aa50 | DAT_01fba480
    ADD ESP,0x4                         ; 0050aa56
    LEA ESI,[EDX + 0x1]                 ; 0050aa59
    MOV dword ptr [EDX*0x4 + 0x1fba614],EAX ; 0050aa5c
    MOV dword ptr [0x01fba480],ESI      ; 0050aa63 | DAT_01fba480
    POP EBX                             ; 0050aa69
    POP ESI                             ; 0050aa6a
    RET                                 ; 0050aa6b

