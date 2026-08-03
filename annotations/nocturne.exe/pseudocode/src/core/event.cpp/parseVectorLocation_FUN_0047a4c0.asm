; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_parseVectorLocation_FUN_0047a4c0(char *buffer,int *offset,CVector3f *out_position)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; int *            Stack[0x8]:4   offset
; CVector3f *      Stack[0xc]:4   out_position
; Local Variables:
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047f1b8
;
; Referenced Globals:
;   TerminatedCString s_f_f_f_n_0057f46e
;   TerminatedCString s_n_0057f480
;   TerminatedCString s_Error_parsing_vector_loc_0057f48e
;   undefined4 DAT_0059cf1c
;   CDemonActorType g_CDemonActorActorType_00763e48
;   undefined4 g_CDemonActorActorType_00763e48.name_hash
;   undefined4 DAT_01c08b60
;
; Called Functions:
;   core_event.cpp_resolveActorByName_FUN_0047a390
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_stdio.c_sscanf_FUN_00566b5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a4c0
        ;   Label: core_event.cpp_parseVectorLocation_FUN_0047a4c0
    PUSH ESI                            ; 0047a4c1
    PUSH EDI                            ; 0047a4c2
    PUSH EBP                            ; 0047a4c3
    SUB ESP,0x68                        ; 0047a4c4
    MOV ESI,dword ptr [ESP + 0x80]      ; 0047a4c7
    MOV EBX,dword ptr [ESP + 0x84]      ; 0047a4ce
    LEA EAX,[ESP + 0x64]                ; 0047a4d5
    PUSH EAX                            ; 0047a4d9
    LEA EAX,[EBX + 0x8]                 ; 0047a4da
    PUSH EAX                            ; 0047a4dd
    LEA EAX,[EBX + 0x4]                 ; 0047a4de
    MOV EDX,0xffffffff                  ; 0047a4e1
    PUSH EAX                            ; 0047a4e6
    MOV dword ptr [ESP + 0x70],EDX      ; 0047a4e7
    PUSH EBX                            ; 0047a4eb
    MOV ECX,dword ptr [ESI]             ; 0047a4ec
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0047a4ee
    PUSH 0x57f46e                       ; 0047a4f5 | = " { %f, %f, %f }%n"
    ADD EAX,ECX                         ; 0047a4fa
    PUSH EAX                            ; 0047a4fc
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047a4fd
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x18                        ; 0047a502
    MOV EDI,dword ptr [ESP + 0x64]      ; 0047a505
    CMP EDI,0x7                         ; 0047a509
    JL 0x0047a523                       ; 0047a50c
        ;   XREF to: 0047a523 (CONDITIONAL_JUMP)  ; LAB_0047a523
    MOV EAX,EDI                         ; 0047a50e
    MOV EDI,dword ptr [ESI]             ; 0047a510
    ADD EDI,EAX                         ; 0047a512
    MOV EAX,0x1                         ; 0047a514
    MOV dword ptr [ESI],EDI             ; 0047a519
    ADD ESP,0x68                        ; 0047a51b
    POP EBP                             ; 0047a51e
    POP EDI                             ; 0047a51f
    POP ESI                             ; 0047a520
    POP EBX                             ; 0047a521
    RET                                 ; 0047a522
    LEA EAX,[ESP + 0x64]                ; 0047a523
        ;   Label: LAB_0047a523
    PUSH EAX                            ; 0047a527
    LEA EAX,[ESP + 0x4]                 ; 0047a528
    PUSH EAX                            ; 0047a52c
    MOV EBP,dword ptr [ESI]             ; 0047a52d
    MOV EAX,dword ptr [ESP + 0x84]      ; 0047a52f
    PUSH 0x57f480                       ; 0047a536 | = " %[^ ,(){}]%n"
    ADD EAX,EBP                         ; 0047a53b
    PUSH EAX                            ; 0047a53d
    CALL crt_stdio.c_sscanf_FUN_00566b5c ; 0047a53e
        ;   XREF to: 00566b5c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_00566b5c(char * str, char * format)
    ADD ESP,0x10                        ; 0047a543
    CMP dword ptr [ESP + 0x64],0x0      ; 0047a546
    JL 0x0047a59e                       ; 0047a54b
        ;   XREF to: 0047a59e (CONDITIONAL_JUMP)  ; LAB_0047a59e
    PUSH 0x763e48                       ; 0047a54d | g_CDemonActorActorType_00763e48
    MOV EDX,dword ptr [0x00763e80]      ; 0047a552 | g_CDemonActorActorType_00763e48.name_hash
    PUSH EDX                            ; 0047a558
    LEA EAX,[ESP + 0x8]                 ; 0047a559
    PUSH EAX                            ; 0047a55d
    CALL core_event.cpp_resolveActorByName_FUN_0047a390 ; 0047a55e
        ;   XREF to: 0047a390 (UNCONDITIONAL_CALL)  ; CDemonActor * core_event.cpp_resolveActorByName_FUN_0047a390(char * name, uint class_hash, char * class_name)
    MOV EDX,EAX                         ; 0047a563
    ADD ESP,0xc                         ; 0047a565
    TEST EAX,EAX                        ; 0047a568
    JZ 0x0047a5bd                       ; 0047a56a
        ;   XREF to: 0047a5bd (CONDITIONAL_JUMP)  ; LAB_0047a5bd
    MOV EAX,dword ptr [ESP + 0x64]      ; 0047a56c
    ADD dword ptr [ESI],EAX             ; 0047a570
    CMP EDX,dword ptr [0x0059cf1c]      ; 0047a572 | DAT_0059cf1c
    JZ 0x0047a5ca                       ; 0047a578
        ;   XREF to: 0047a5ca (CONDITIONAL_JUMP)  ; LAB_0047a5ca
    ADD EDX,0x20                        ; 0047a57a
    CMP EBX,EDX                         ; 0047a57d
    JZ 0x0047a591                       ; 0047a57f
        ;   XREF to: 0047a591 (CONDITIONAL_JUMP)  ; LAB_0047a591
    MOV EAX,dword ptr [EDX]             ; 0047a581
    MOV dword ptr [EBX],EAX             ; 0047a583
    MOV EAX,dword ptr [EDX + 0x4]       ; 0047a585
    MOV dword ptr [EBX + 0x4],EAX       ; 0047a588
    MOV EAX,dword ptr [EDX + 0x8]       ; 0047a58b
    MOV dword ptr [EBX + 0x8],EAX       ; 0047a58e
    MOV EAX,0x1                         ; 0047a591
        ;   Label: LAB_0047a591
    ADD ESP,0x68                        ; 0047a596
    POP EBP                             ; 0047a599
    POP EDI                             ; 0047a59a
    POP ESI                             ; 0047a59b
    POP EBX                             ; 0047a59c
    RET                                 ; 0047a59d
    PUSH 0x57f48e                       ; 0047a59e | = "Error parsing vector location"
        ;   Label: LAB_0047a59e
    PUSH 0x1c08b60                      ; 0047a5a3 | DAT_01c08b60
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0047a5a8
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    MOV EAX,0xffffffff                  ; 0047a5ad
    ADD ESP,0x8                         ; 0047a5b2
    ADD ESP,0x68                        ; 0047a5b5
    POP EBP                             ; 0047a5b8
    POP EDI                             ; 0047a5b9
    POP ESI                             ; 0047a5ba
    POP EBX                             ; 0047a5bb
    RET                                 ; 0047a5bc
    MOV EAX,0xffffffff                  ; 0047a5bd
        ;   Label: LAB_0047a5bd
    ADD ESP,0x68                        ; 0047a5c2
    POP EBP                             ; 0047a5c5
    POP EDI                             ; 0047a5c6
    POP ESI                             ; 0047a5c7
    POP EBX                             ; 0047a5c8
    RET                                 ; 0047a5c9
    XOR EAX,EAX                         ; 0047a5ca
        ;   Label: LAB_0047a5ca
    ADD ESP,0x68                        ; 0047a5cc
    POP EBP                             ; 0047a5cf
    POP EDI                             ; 0047a5d0
    POP ESI                             ; 0047a5d1
    POP EBX                             ; 0047a5d2
    RET                                 ; 0047a5d3

