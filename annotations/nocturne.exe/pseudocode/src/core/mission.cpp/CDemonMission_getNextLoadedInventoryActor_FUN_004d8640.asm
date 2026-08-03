; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_mission_cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640(CDemonMission *this_ptr,char *actor_name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   actor_name
;
; XREF[1]:
;   core_inv.cpp_CInventory_load_FUN_004c1190 at 004c1300
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00589999
;   TerminatedCString s_CDemonMission_getNextLoa_005899ad
;   TerminatedCString s_core_mission_cpp_005899e3
;   TerminatedCString s_CDemonMission_getNextLoa_005899f7
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8640
        ;   Label: core_mission.cpp_CDemonMission_getNextLoadedInventoryActor_FUN_004d8640
    PUSH EDI                            ; 004d8641
    PUSH EBP                            ; 004d8642
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d8643
    CMP dword ptr [EBX + 0x854],0x0     ; 004d8647
    JNZ 0x004d8675                      ; 004d864e
        ;   XREF to: 004d8675 (CONDITIONAL_JUMP)  ; LAB_004d8675
    PUSH ESI                            ; 004d8650
    MOV ECX,0x589999                    ; 004d8651 | = "..\\core\\mission.cpp"
    MOV ESI,0x186                       ; 004d8656
    PUSH 0x5899ad                       ; 004d865b | = "CDemonMission::getNextLoadedInventory..."
    MOV dword ptr [0x01cc4800],ECX      ; 004d8660 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004d8666 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d866c
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d8671
    POP ESI                             ; 004d8674
    MOV EDI,dword ptr [ESP + 0x14]      ; 004d8675
        ;   Label: LAB_004d8675
    PUSH EDI                            ; 004d8679
    MOV EBP,dword ptr [EBX + 0x854]     ; 004d867a
    PUSH EBP                            ; 004d8680
    CALL crt_string.c__stricmp_FUN_00564520 ; 004d8681
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d8686
    TEST EAX,EAX                        ; 004d8689
    JNZ 0x004d86a3                      ; 004d868b
        ;   XREF to: 004d86a3 (CONDITIONAL_JUMP)  ; LAB_004d86a3
    MOV EAX,dword ptr [EBX + 0x854]     ; 004d868d
        ;   Label: LAB_004d868d
    MOV EDX,dword ptr [EAX + 0x144]     ; 004d8693
    MOV dword ptr [EBX + 0x854],EDX     ; 004d8699
    POP EBP                             ; 004d869f
    POP EDI                             ; 004d86a0
    POP EBX                             ; 004d86a1
    RET                                 ; 004d86a2
    MOV ECX,dword ptr [EBX + 0x854]     ; 004d86a3
        ;   Label: LAB_004d86a3
    PUSH ECX                            ; 004d86a9
    PUSH EDI                            ; 004d86aa
    MOV EAX,0x5899e3                    ; 004d86ab | = "..\\core\\mission.cpp"
    MOV EDX,0x18b                       ; 004d86b0
    PUSH 0x5899f7                       ; 004d86b5 | = "CDemonMission::getNextLoadedInventory..."
    MOV [0x01cc4800],EAX                ; 004d86ba | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004d86bf | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d86c5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 004d86ca
    JMP 0x004d868d                      ; 004d86cd
        ;   XREF to: 004d868d (UNCONDITIONAL_JUMP)  ; LAB_004d868d

