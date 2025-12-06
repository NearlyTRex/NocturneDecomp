; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90(C3DSCamera * this_ptr, FILE * file_handle)
;
; Parameters:
; C3DSCamera *     Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x23c]:1  local_23c
; undefined1       Stack[-0x23b]:1  local_23b
; undefined4       Stack[-0x20]:4  local_20
;
; Called Functions:
;   crt_stdio.c_fgets_FUN_005fefd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00585c90
        ;   Label: core_setutil.cpp_C3DSCamera_import3DS_FUN_00585c90
    PUSH ESI                            ; 00585c91
    PUSH EDI                            ; 00585c92
    PUSH EBP                            ; 00585c93
    MOV EBP,ESP                         ; 00585c94
    SUB ESP,0x22c                       ; 00585c96
    AND ESP,0xfffffff8                  ; 00585c9c
    MOV EBX,dword ptr [EBP + 0x18]      ; 00585c9f
    PUSH EBX                            ; 00585ca2
    MOV ESI,0xff                        ; 00585ca3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585ca8
    PUSH ESI                            ; 00585cab
    MOV dword ptr [ESP + 0x228],EAX     ; 00585cac
    LEA EAX,[ESP + 0xc]                 ; 00585cb3
    PUSH EAX                            ; 00585cb7
    CALL crt_stdio.c_fgets_FUN_005fefd0 ; 00585cb8 | char * crt_stdio.c_fgets_FUN_005fefd0(char * str, int num, FILE * stream)
        ;   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00585cbd
    LEA EDI,[ESP + 0x4]                 ; 00585cc0
    SUB ECX,ECX                         ; 00585cc4
    DEC ECX                             ; 00585cc6
    XOR EAX,EAX                         ; 00585cc7
    SCASB.REPNE ES:EDI                  ; 00585cc9
    NOT ECX                             ; 00585ccb
    DEC ECX                             ; 00585ccd
    TEST ECX,ECX                        ; 00585cce
    JLE 0x00585cd8                      ; 00585cd0 | LAB_00585cd8
        ;   XREF to: 00585cd8 (CONDITIONAL_JUMP)
    XOR AH,AH                           ; 00585cd2
    MOV byte ptr [ESP + ECX*0x1 + 0x3],AH ; 00585cd4
    LEA EDI,[ESP + 0x4]                 ; 00585cd8
        ;   Label: LAB_00585cd8
    SUB ECX,ECX                         ; 00585cdc
    DEC ECX                             ; 00585cde
    XOR EAX,EAX                         ; 00585cdf
    SCASB.REPNE ES:EDI                  ; 00585ce1
    NOT ECX                             ; 00585ce3
    DEC ECX                             ; 00585ce5
    XOR DL,DL                           ; 00585ce6
    MOV EDI,dword ptr [ESP + 0x220]     ; 00585ce8
    MOV byte ptr [ESP + ESI*0x1 + 0x4],DL ; 00585cef
    LEA ESI,[ESP + 0x4]                 ; 00585cf3
    PUSH EDI                            ; 00585cf7
    MOV AL,byte ptr [ESI]               ; 00585cf8
        ;   Label: LAB_00585cf8
    MOV byte ptr [EDI],AL               ; 00585cfa
    CMP AL,0x0                          ; 00585cfc
    JZ 0x00585d10                       ; 00585cfe | LAB_00585d10
        ;   XREF to: 00585d10 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 00585d00
    ADD ESI,0x2                         ; 00585d03
    MOV byte ptr [EDI + 0x1],AL         ; 00585d06
    ADD EDI,0x2                         ; 00585d09
    CMP AL,0x0                          ; 00585d0c
    JNZ 0x00585cf8                      ; 00585d0e | LAB_00585cf8
        ;   XREF to: 00585cf8 (CONDITIONAL_JUMP)
    POP EDI                             ; 00585d10
        ;   Label: LAB_00585d10
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585d11
    ADD EAX,0x108                       ; 00585d14
    PUSH EAX                            ; 00585d19
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585d1a
    ADD EAX,0x104                       ; 00585d1d
    PUSH EAX                            ; 00585d22
    MOV EAX,dword ptr [EBP + 0x14]      ; 00585d23
    ADD EAX,0x100                       ; 00585d26
    PUSH EAX                            ; 00585d2b

