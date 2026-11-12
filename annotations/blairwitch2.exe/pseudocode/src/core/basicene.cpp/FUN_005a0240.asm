; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_basicene_cpp_FUN_005a0240(int param_1)
;
;
; XREF[1]:
;   core_script.cpp_FUN_00522350 at 005278f2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a0240
        ;   Label: core_basicene.cpp_FUN_005a0240
    LEA EAX,[EDX + 0x11360]             ; 005a0244
    MOV ECX,dword ptr [EDX + 0x20]      ; 005a024a
    MOV dword ptr [EAX],ECX             ; 005a024d
    MOV ECX,dword ptr [EDX + 0x24]      ; 005a024f
    MOV dword ptr [EAX + 0x4],ECX       ; 005a0252
    MOV ECX,dword ptr [EDX + 0x28]      ; 005a0255
    MOV dword ptr [EAX + 0x8],ECX       ; 005a0258
    MOV EDX,dword ptr [EDX + 0x2c]      ; 005a025b
    MOV dword ptr [EAX + 0xc],EDX       ; 005a025e
    RET                                 ; 005a0261

