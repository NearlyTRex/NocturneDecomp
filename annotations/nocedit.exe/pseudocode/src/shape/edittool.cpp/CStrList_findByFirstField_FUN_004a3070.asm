; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_CStrList_findByFirstField_FUN_004a3070(CStrList *this_ptr,char *search_field)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   search_field
; Local Variables:
; undefined1       Stack[-0x19c]:1  local_19c
; undefined1       Stack[-0xd4]:1  local_d4
;
; XREF[2]:
;   core_msnedit.cpp_CDemonMission_editActorPropertiesDialog_FUN_0053c730 at 0053c82f
;   core_script.cpp_editParameterValue_FUN_00562920 at 00563ae5
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005fe7f0
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3070
        ;   Label: shape_edittool.cpp_CStrList_findByFirstField_FUN_004a3070
    PUSH ESI                            ; 004a3071
    PUSH EDI                            ; 004a3072
    SUB ESP,0x190                       ; 004a3073
    MOV EDI,dword ptr [ESP + 0x1a0]     ; 004a3079
    MOV ECX,dword ptr [ESP + 0x1a4]     ; 004a3080
    LEA EDX,[ESP + 0xc8]                ; 004a3087
    MOV BL,byte ptr [ECX]               ; 004a308e
    MOV EAX,ECX                         ; 004a3090
    TEST BL,BL                          ; 004a3092
    JZ 0x004a309b                       ; 004a3094
        ;   XREF to: 004a309b (CONDITIONAL_JUMP)  ; LAB_004a309b
    CMP byte ptr [EAX],0x9              ; 004a3096
        ;   Label: LAB_004a3096
    JNZ 0x004a30ef                      ; 004a3099
        ;   XREF to: 004a30ef (CONDITIONAL_JUMP)  ; LAB_004a30ef
    MOV byte ptr [EDX],0x0              ; 004a309b
        ;   Label: LAB_004a309b
    MOV EDX,dword ptr [EDI]             ; 004a309e
    XOR ESI,ESI                         ; 004a30a0
    TEST EDX,EDX                        ; 004a30a2
    JLE 0x004a30e0                      ; 004a30a4
        ;   XREF to: 004a30e0 (CONDITIONAL_JUMP)  ; LAB_004a30e0
    PUSH ESI                            ; 004a30a6
        ;   Label: LAB_004a30a6
    PUSH EDI                            ; 004a30a7
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 004a30a8
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    LEA EDX,[ESP + 0x8]                 ; 004a30ad
    MOV BL,byte ptr [EAX]               ; 004a30b1
    ADD ESP,0x8                         ; 004a30b3
    TEST BL,BL                          ; 004a30b6
    JZ 0x004a30bf                       ; 004a30b8
        ;   XREF to: 004a30bf (CONDITIONAL_JUMP)  ; LAB_004a30bf
    CMP byte ptr [EAX],0x9              ; 004a30ba
        ;   Label: LAB_004a30ba
    JNZ 0x004a30fd                      ; 004a30bd
        ;   XREF to: 004a30fd (CONDITIONAL_JUMP)  ; LAB_004a30fd
    MOV byte ptr [EDX],0x0              ; 004a30bf
        ;   Label: LAB_004a30bf
    LEA EAX,[ESP + 0xc8]                ; 004a30c2
    PUSH EAX                            ; 004a30c9
    LEA EAX,[ESP + 0x4]                 ; 004a30ca
    PUSH EAX                            ; 004a30ce
    CALL crt_string.c__stricmp_FUN_005fe7f0 ; 004a30cf
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a30d4
    TEST EAX,EAX                        ; 004a30d7
    JZ 0x004a310b                       ; 004a30d9
        ;   XREF to: 004a310b (CONDITIONAL_JUMP)  ; LAB_004a310b
    INC ESI                             ; 004a30db
    CMP ESI,dword ptr [EDI]             ; 004a30dc
    JL 0x004a30a6                       ; 004a30de
        ;   XREF to: 004a30a6 (CONDITIONAL_JUMP)  ; LAB_004a30a6
    MOV EAX,0xffffffff                  ; 004a30e0
        ;   Label: LAB_004a30e0
    ADD ESP,0x190                       ; 004a30e5
    POP EDI                             ; 004a30eb
    POP ESI                             ; 004a30ec
    POP EBX                             ; 004a30ed
    RET                                 ; 004a30ee
    MOV BL,byte ptr [EAX]               ; 004a30ef
        ;   Label: LAB_004a30ef
    INC EAX                             ; 004a30f1
    MOV byte ptr [EDX],BL               ; 004a30f2
    MOV BH,byte ptr [EAX]               ; 004a30f4
    INC EDX                             ; 004a30f6
    TEST BH,BH                          ; 004a30f7
    JNZ 0x004a3096                      ; 004a30f9
        ;   XREF to: 004a3096 (CONDITIONAL_JUMP)  ; LAB_004a3096
    JMP 0x004a309b                      ; 004a30fb
        ;   XREF to: 004a309b (UNCONDITIONAL_JUMP)  ; LAB_004a309b
    MOV BL,byte ptr [EAX]               ; 004a30fd
        ;   Label: LAB_004a30fd
    INC EAX                             ; 004a30ff
    MOV byte ptr [EDX],BL               ; 004a3100
    MOV BH,byte ptr [EAX]               ; 004a3102
    INC EDX                             ; 004a3104
    TEST BH,BH                          ; 004a3105
    JNZ 0x004a30ba                      ; 004a3107
        ;   XREF to: 004a30ba (CONDITIONAL_JUMP)  ; LAB_004a30ba
    JMP 0x004a30bf                      ; 004a3109
        ;   XREF to: 004a30bf (UNCONDITIONAL_JUMP)  ; LAB_004a30bf
    MOV EAX,ESI                         ; 004a310b
        ;   Label: LAB_004a310b
    ADD ESP,0x190                       ; 004a310d
    POP EDI                             ; 004a3113
    POP ESI                             ; 004a3114
    POP EBX                             ; 004a3115
    RET                                 ; 004a3116

