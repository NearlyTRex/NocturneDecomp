; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_fpemu.c_staticInit_FUN_0060be80(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   byte BYTE_00684acd = 0x0
;   byte g_UseSoftwareMath = 0x0
;
; Called Functions:
;   crt_math.c_dadd_FUN_0060defc
;   crt_math.c_dmul_FUN_0060e0b9
;   crt_unknown.c_FUN_0060dcf6
;   crt_unknown.c_FUN_0060e256
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060be80
        ;   Label: crt_fpemu.c_staticInit_FUN_0060be80
    SUB ESP,0x10                        ; 0060be81
    MOV dword ptr [ESP + 0x8],0xc0000000 ; 0060be84
    MOV dword ptr [ESP + 0xc],0x4150017e ; 0060be8c
    MOV dword ptr [ESP],0x80000000      ; 0060be94
    MOV dword ptr [ESP + 0x4],0x4147ffff ; 0060be9b
    CMP byte ptr [0x00684acd],0x3       ; 0060bea3 | BYTE_00684acd
    JC 0x0060bef5                       ; 0060beaa
        ;   XREF to: 0060bef5 (CONDITIONAL_JUMP)  ; LAB_0060bef5
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060beac
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060beb0
    MOV EBX,dword ptr [ESP]             ; 0060beb4
    MOV ECX,dword ptr [ESP + 0x4]       ; 0060beb7
    CALL crt_unknown.c_FUN_0060dcf6     ; 0060bebb
        ;   XREF to: 0060dcf6 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060dcf6()
    MOV EBX,dword ptr [ESP]             ; 0060bec0
    MOV ECX,dword ptr [ESP + 0x4]       ; 0060bec3
    CALL crt_math.c_dmul_FUN_0060e0b9   ; 0060bec7
        ;   XREF to: 0060e0b9 (UNCONDITIONAL_CALL)  ; double crt_math.c_dmul_FUN_0060e0b9(double a, double b)
    MOV EBX,EAX                         ; 0060becc
    MOV ECX,EDX                         ; 0060bece
    MOV EAX,dword ptr [ESP + 0x8]       ; 0060bed0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0060bed4
    CALL crt_math.c_dadd_FUN_0060defc   ; 0060bed8
        ;   XREF to: 0060defc (UNCONDITIONAL_CALL)  ; double crt_math.c_dadd_FUN_0060defc(double a, double b)
    MOV EBX,0xe2308c3a                  ; 0060bedd
    MOV ECX,0x3e45798e                  ; 0060bee2
    CALL crt_unknown.c_FUN_0060e256     ; 0060bee7
        ;   XREF to: 0060e256 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0060e256()
    JLE 0x0060bef5                      ; 0060beec
        ;   XREF to: 0060bef5 (CONDITIONAL_JUMP)  ; LAB_0060bef5
    OR byte ptr [0x00685060],0x1        ; 0060beee | g_UseSoftwareMath
    ADD ESP,0x10                        ; 0060bef5
        ;   Label: LAB_0060bef5
    POP EBX                             ; 0060bef8
    RET                                 ; 0060bef9

