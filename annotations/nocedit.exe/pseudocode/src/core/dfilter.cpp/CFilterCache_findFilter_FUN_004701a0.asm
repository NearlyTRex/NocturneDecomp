; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonFilter * __cdecl core_dfilter_cpp_CFilterCache_findFilter_FUN_004701a0(CFilterCache *this_ptr,char *filter_name)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filter_name
;
; XREF[2]:
;   core_dfilter.cpp_CFilterFX_openMovie_FUN_00470730 at 0047087b
;   core_dfilter.cpp_CFilterFX_process_FUN_004708e0 at 004708f5
;
; Called Functions:
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004701a0
        ;   Label: core_dfilter.cpp_CFilterCache_findFilter_FUN_004701a0
    PUSH ESI                            ; 004701a1
    PUSH EDI                            ; 004701a2
    PUSH EBP                            ; 004701a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004701a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004701a8
    MOV EDX,dword ptr [EDI]             ; 004701ac
    XOR EBX,EBX                         ; 004701ae
    TEST EDX,EDX                        ; 004701b0
    JLE 0x004701cf                      ; 004701b2
        ;   XREF to: 004701cf (CONDITIONAL_JUMP)  ; LAB_004701cf
    LEA ESI,[EDI + 0x4]                 ; 004701b4
    PUSH EBP                            ; 004701b7
        ;   Label: LAB_004701b7
    PUSH ESI                            ; 004701b8
    CALL crt_string.c_strcmp_FUN_005fef20 ; 004701b9
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 004701be
    TEST EAX,EAX                        ; 004701c1
    JZ 0x004701d6                       ; 004701c3
        ;   XREF to: 004701d6 (CONDITIONAL_JUMP)  ; LAB_004701d6
    INC EBX                             ; 004701c5
    MOV ECX,dword ptr [EDI]             ; 004701c6
    ADD ESI,0x28                        ; 004701c8
    CMP EBX,ECX                         ; 004701cb
    JL 0x004701b7                       ; 004701cd
        ;   XREF to: 004701b7 (CONDITIONAL_JUMP)  ; LAB_004701b7
    XOR EAX,EAX                         ; 004701cf
        ;   Label: LAB_004701cf
    POP EBP                             ; 004701d1
    POP EDI                             ; 004701d2
    POP ESI                             ; 004701d3
    POP EBX                             ; 004701d4
    RET                                 ; 004701d5
    SHL EBX,0x2                         ; 004701d6
        ;   Label: LAB_004701d6
    LEA EAX,[EDI + EBX*0x1]             ; 004701d9
    MOV EAX,dword ptr [EAX + 0xa04]     ; 004701dc
    POP EBP                             ; 004701e2
    POP EDI                             ; 004701e3
    POP ESI                             ; 004701e4
    POP EBX                             ; 004701e5
    RET                                 ; 004701e6

