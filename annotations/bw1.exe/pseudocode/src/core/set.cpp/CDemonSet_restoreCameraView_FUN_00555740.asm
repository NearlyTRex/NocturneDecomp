; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_restoreCameraView_FUN_00555740(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_FUN_00550580 at 005505e8
;
; Called Functions:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555740
        ;   Label: core_set.cpp_CDemonSet_restoreCameraView_FUN_00555740
    PUSH ESI                            ; 00555741
    MOV EBX,dword ptr [ESP + 0xc]       ; 00555742
    MOV EDX,dword ptr [EBX + 0x15aeb8]  ; 00555746
    PUSH EDX                            ; 0055574c
    PUSH EBX                            ; 0055574d
    MOV ESI,dword ptr [EBX + 0x15aebc]  ; 0055574e
    CALL core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 ; 00555754
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0(CDemonSet * this_ptr, int index)
    MOV dword ptr [EBX + 0x15aec0],0x0  ; 00555759
    ADD ESP,0x8                         ; 00555763
    MOV dword ptr [EBX + 0x15aebc],ESI  ; 00555766
    POP ESI                             ; 0055576c
    POP EBX                             ; 0055576d
    RET                                 ; 0055576e

