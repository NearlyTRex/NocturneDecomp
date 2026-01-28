; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_charactr_cpp_FUN_0042f990(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0042f990
        ;   Label: core_charactr.cpp_FUN_0042f990
    MOV EDX,dword ptr [ESP + 0xc]       ; 0042f993
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042f997
    MOV ECX,dword ptr [EDX + 0xc]       ; 0042f99b
    MOV dword ptr [ESP],ECX             ; 0042f99e
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0042f9a1
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0042f9a4
    MOV dword ptr [ESP + 0x4],EDX       ; 0042f9a7
    MOV dword ptr [EAX + 0x4],ECX       ; 0042f9ab
    MOV EDX,dword ptr [ESP]             ; 0042f9ae
    MOV dword ptr [EAX],EDX             ; 0042f9b1
    MOV EDX,dword ptr [ESP + 0x4]       ; 0042f9b3
    MOV dword ptr [EAX + 0x8],EDX       ; 0042f9b7
    ADD ESP,0x8                         ; 0042f9ba
    RET                                 ; 0042f9bd

