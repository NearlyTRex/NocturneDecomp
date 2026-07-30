; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_load_FUN_00438270(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_setup_FUN_00424260 at 004243a7
;   core_succubus.cpp_CSuccubus_setup_FUN_00540c20 at 00540c92
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_0057aee5
;   TerminatedCString s_CClothList_load_out_of_m_0057aef7
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_cloth.cpp_CCloth_ctor_FUN_00435100
;   core_cloth.cpp_CCloth_dtor_FUN_00435160
;   core_cloth.cpp_CCloth_load_FUN_00435240
;   core_main.c_FUN_004c8440
;   crt_unknown.c_FUN_00564494
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438270
        ;   Label: core_cloth.cpp_CClothList_load_FUN_00438270
    PUSH ESI                            ; 00438271
    PUSH EDI                            ; 00438272
    PUSH EBP                            ; 00438273
    MOV EBP,dword ptr [ESP + 0x14]      ; 00438274
    MOV EDX,dword ptr [EBP]             ; 00438278
    XOR EDI,EDI                         ; 0043827b
    TEST EDX,EDX                        ; 0043827d
    JLE 0x004382f8                      ; 0043827f
        ;   XREF to: 004382f8 (CONDITIONAL_JUMP)  ; LAB_004382f8
    LEA ESI,[EBP + 0x4]                 ; 00438285
    MOV EBX,EBP                         ; 00438288
    MOV EAX,dword ptr [EBX + 0x194]     ; 0043828a
        ;   Label: LAB_0043828a
    TEST EAX,EAX                        ; 00438290
    JNZ 0x004382fd                      ; 00438292
        ;   XREF to: 004382fd (CONDITIONAL_JUMP)  ; LAB_004382fd
    PUSH 0x3ab30                        ; 00438294
        ;   Label: LAB_00438294
    CALL crt_unknown.c_FUN_0056497c     ; 00438299
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0043829e
    TEST EAX,EAX                        ; 004382a1
    JZ 0x004382ae                       ; 004382a3
        ;   XREF to: 004382ae (CONDITIONAL_JUMP)  ; LAB_004382ae
    PUSH EAX                            ; 004382a5
    CALL core_cloth.cpp_CCloth_ctor_FUN_00435100 ; 004382a6
        ;   XREF to: 00435100 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_ctor_FUN_00435100(CCloth * this_ptr)
    ADD ESP,0x4                         ; 004382ab
    MOV dword ptr [EBX + 0x194],EAX     ; 004382ae
        ;   Label: LAB_004382ae
    TEST EAX,EAX                        ; 004382b4
    JNZ 0x004382da                      ; 004382b6
        ;   XREF to: 004382da (CONDITIONAL_JUMP)  ; LAB_004382da
    MOV ECX,0x57aee5                    ; 004382b8 | = "..\\core\\cloth.cpp"
    MOV EAX,0x5a9                       ; 004382bd
    PUSH 0x57aef7                       ; 004382c2 | = "CClothList::load - out of memory for ..."
    MOV dword ptr [0x01cc4800],ECX      ; 004382c7 | PTR_01cc4800
    MOV [0x01cc4804],EAX                ; 004382cd | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004382d2
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004382d7
    PUSH ESI                            ; 004382da
        ;   Label: LAB_004382da
    MOV ECX,dword ptr [EBX + 0x194]     ; 004382db
    PUSH ECX                            ; 004382e1
    ADD EBX,0x4                         ; 004382e2
    INC EDI                             ; 004382e5
    CALL core_cloth.cpp_CCloth_load_FUN_00435240 ; 004382e6
        ;   XREF to: 00435240 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00435240(CCloth * this_ptr, char * filename)
    ADD ESI,0x28                        ; 004382eb
    MOV EAX,dword ptr [EBP]             ; 004382ee
    ADD ESP,0x8                         ; 004382f1
    CMP EDI,EAX                         ; 004382f4
    JL 0x0043828a                       ; 004382f6
        ;   XREF to: 0043828a (CONDITIONAL_JUMP)  ; LAB_0043828a
    POP EBP                             ; 004382f8
        ;   Label: LAB_004382f8
    POP EDI                             ; 004382f9
    POP ESI                             ; 004382fa
    POP EBX                             ; 004382fb
    RET                                 ; 004382fc
    PUSH 0x0                            ; 004382fd
        ;   Label: LAB_004382fd
    PUSH EAX                            ; 004382ff
    CALL core_cloth.cpp_CCloth_dtor_FUN_00435160 ; 00438300
        ;   XREF to: 00435160 (UNCONDITIONAL_CALL)  ; CCloth * core_cloth.cpp_CCloth_dtor_FUN_00435160(CCloth * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00438305
    PUSH EAX                            ; 00438308
    CALL crt_unknown.c_FUN_00564494     ; 00438309
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0043830e
    JMP 0x00438294                      ; 00438311
        ;   XREF to: 00438294 (UNCONDITIONAL_JUMP)  ; LAB_00438294

