; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0(CDemonRaytrace *this_ptr,CVector3f *output_position,int cube_index)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_position
; int              Stack[0xc]:4   cube_index
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494b1b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00499ba0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00499ba0
    PUSH ESI                            ; 00499ba1
    PUSH EDI                            ; 00499ba2
    PUSH EBP                            ; 00499ba3
    SUB ESP,0x4                         ; 00499ba4
    MOV ECX,dword ptr [ESP + 0x18]      ; 00499ba7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00499bab
    MOV EBX,dword ptr [ESP + 0x20]      ; 00499baf
    MOV EDI,dword ptr [ECX + 0x44]      ; 00499bb3
    IMUL EDI,dword ptr [ECX + 0x48]     ; 00499bb6
    MOV EDX,EBX                         ; 00499bba
    MOV EAX,EBX                         ; 00499bbc
    SAR EDX,0x1f                        ; 00499bbe
    IDIV EDI                            ; 00499bc1
    MOV EDI,EAX                         ; 00499bc3
    MOV EAX,dword ptr [ECX + 0x44]      ; 00499bc5
    IMUL EAX,EDI                        ; 00499bc8
    MOV EBP,dword ptr [ECX + 0x48]      ; 00499bcb
    IMUL EAX,EBP                        ; 00499bce
    SUB EBX,EAX                         ; 00499bd1
    MOV EDX,EBX                         ; 00499bd3
    MOV EAX,EBX                         ; 00499bd5
    SAR EDX,0x1f                        ; 00499bd7
    IDIV EBP                            ; 00499bda
    MOV EDX,EBP                         ; 00499bdc
    IMUL EDX,EAX                        ; 00499bde
    MOV dword ptr [ESP],EDI             ; 00499be1
    FILD dword ptr [ESP]                ; 00499be4
    FMUL float ptr [ECX + 0x28]         ; 00499be7
    FADD float ptr [ECX + 0x10]         ; 00499bea
    MOV dword ptr [ESP],EAX             ; 00499bed
    FSTP float ptr [ESI]                ; 00499bf0
    FILD dword ptr [ESP]                ; 00499bf2
    FMUL float ptr [ECX + 0x2c]         ; 00499bf5
    FLD float ptr [ECX + 0x14]          ; 00499bf8
    SUB EBX,EDX                         ; 00499bfb
    FADDP                               ; 00499bfd
    MOV dword ptr [ESP],EBX             ; 00499bff
    FSTP float ptr [ESI + 0x4]          ; 00499c02
    FILD dword ptr [ESP]                ; 00499c05
    FMUL float ptr [ECX + 0x30]         ; 00499c08
    FADD float ptr [ECX + 0x18]         ; 00499c0b
    MOV EAX,ESI                         ; 00499c0e
    FSTP float ptr [ESI + 0x8]          ; 00499c10
    ADD ESP,0x4                         ; 00499c13
    POP EBP                             ; 00499c16
    POP EDI                             ; 00499c17
    POP ESI                             ; 00499c18
    POP EBX                             ; 00499c19
    RET                                 ; 00499c1a

