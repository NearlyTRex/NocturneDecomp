; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_onMouse_FUN_004a2380(SPageResourceTwanaCharacter *this_ptr,int clicked,int x,int y)
;
; Parameters:
; SPageResourceTwanaCharacter * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   clicked
; int              Stack[0xc]:4   x
; int              Stack[0x10]:4   y
;
; Referenced Globals:
;   undefined4 DAT_01cab780
;
; Called Functions:
;   core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a2620
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01cab780]      ; 004a2380 | DAT_01cab780
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaCharacter_onMouse_FUN_004a2380
    TEST EDX,EDX                        ; 004a2386
    JZ 0x004a2397                       ; 004a2388
        ;   XREF to: 004a2397 (CONDITIONAL_JUMP)  ; LAB_004a2397
    CMP dword ptr [ESP + 0x8],0x1       ; 004a238a
    JZ 0x004a239a                       ; 004a238f
        ;   XREF to: 004a239a (CONDITIONAL_JUMP)  ; LAB_004a239a
    MOV EAX,0x1                         ; 004a2391
    RET                                 ; 004a2396
    XOR EAX,EAX                         ; 004a2397
        ;   Label: LAB_004a2397
    RET                                 ; 004a2399
    MOV EAX,dword ptr [ESP + 0x4]       ; 004a239a
        ;   Label: LAB_004a239a
    ADD EAX,0x2c                        ; 004a239e
    PUSH EAX                            ; 004a23a1
    PUSH EDX                            ; 004a23a2
    CALL core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a2620 ; 004a23a3
        ;   XREF to: 004a2620 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a2620(SPageResourceTwanaEntry * this_ptr, char * character)
    ADD ESP,0x8                         ; 004a23a8
    MOV EAX,0x1                         ; 004a23ab
    RET                                 ; 004a23b0

