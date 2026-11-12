; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_wildcardStringMatch_FUN_00485840(char *pattern,char *target_string,int case_sensitive)
;
; Parameters:
; char *           Stack[0x4]:4   pattern
; char *           Stack[0x8]:4   target_string
; int              Stack[0xc]:4   case_sensitive
;
; XREF[8]:
;   core_charactr.cpp_FUN_0042b300 at 0042b38f
;   core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c1980 at 004c1a3f
;   core_script.cpp_FUN_00522350 at 00527222
;   core_sound.cpp_CSound_findRandomSoundFile_FUN_005593d0 at 00559416
;   core_sound.cpp_filterSoundFilesByPattern_FUN_00558cb0 at 00558ce2
;   core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_00578570 at 005785a5
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_0051b5d0 at 0051b678
;   shape_edittool.cpp_FUN_00481ca0 at 00481dbd
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005b8470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485840
        ;   Label: shape_edittool.cpp_wildcardStringMatch_FUN_00485840
    PUSH ESI                            ; 00485841
    PUSH EDI                            ; 00485842
    PUSH EBP                            ; 00485843
    MOV EAX,dword ptr [ESP + 0x14]      ; 00485844
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00485848
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048584c
    MOV DL,byte ptr [EAX]               ; 00485850
    MOV ESI,EAX                         ; 00485852
    TEST DL,DL                          ; 00485854
    JZ 0x00485875                       ; 00485856
        ;   XREF to: 00485875 (CONDITIONAL_JUMP)  ; LAB_00485875
    MOV AL,byte ptr [ESI]               ; 00485858
        ;   Label: LAB_00485858
    CMP AL,0x2a                         ; 0048585a
    JNC 0x004858da                      ; 0048585c
        ;   XREF to: 004858da (CONDITIONAL_JUMP)  ; LAB_004858da
    TEST EBP,EBP                        ; 00485862
        ;   Label: LAB_00485862
    JZ 0x004858b3                       ; 00485864
        ;   XREF to: 004858b3 (CONDITIONAL_JUMP)  ; LAB_004858b3
    MOV AL,byte ptr [ESI]               ; 00485866
    CMP AL,byte ptr [EBX]               ; 00485868
    JNZ 0x004858ac                      ; 0048586a
        ;   XREF to: 004858ac (CONDITIONAL_JUMP)  ; LAB_004858ac
    INC EBX                             ; 0048586c
        ;   Label: LAB_0048586c
    MOV DH,byte ptr [ESI + 0x1]         ; 0048586d
    INC ESI                             ; 00485870
    TEST DH,DH                          ; 00485871
    JNZ 0x00485858                      ; 00485873
        ;   XREF to: 00485858 (CONDITIONAL_JUMP)  ; LAB_00485858
    CMP byte ptr [EBX],0x0              ; 00485875
        ;   Label: LAB_00485875
    SETZ AL                             ; 00485878
    AND EAX,0xff                        ; 0048587b
    POP EBP                             ; 00485880
        ;   Label: LAB_00485880
    POP EDI                             ; 00485881
    POP ESI                             ; 00485882
    POP EBX                             ; 00485883
    RET                                 ; 00485884
    INC ESI                             ; 00485885
        ;   Label: LAB_00485885
    PUSH EBP                            ; 00485886
        ;   Label: LAB_00485886
    PUSH EBX                            ; 00485887
    PUSH ESI                            ; 00485888
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00485840 ; 00485889
        ;   XREF to: 00485840 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00485840(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0048588e
    TEST EAX,EAX                        ; 00485891
    JNZ 0x0048589d                      ; 00485893
        ;   XREF to: 0048589d (CONDITIONAL_JUMP)  ; LAB_0048589d
    CMP byte ptr [EBX],0x0              ; 00485895
    JZ 0x00485880                       ; 00485898
        ;   XREF to: 00485880 (CONDITIONAL_JUMP)  ; LAB_00485880
    INC EBX                             ; 0048589a
    JMP 0x00485886                      ; 0048589b
        ;   XREF to: 00485886 (UNCONDITIONAL_JUMP)  ; LAB_00485886
    MOV EAX,0x1                         ; 0048589d
        ;   Label: LAB_0048589d
    POP EBP                             ; 004858a2
    POP EDI                             ; 004858a3
    POP ESI                             ; 004858a4
    POP EBX                             ; 004858a5
    RET                                 ; 004858a6
    CMP byte ptr [EBX],0x0              ; 004858a7
        ;   Label: LAB_004858a7
    JNZ 0x0048586c                      ; 004858aa
        ;   XREF to: 0048586c (CONDITIONAL_JUMP)  ; LAB_0048586c
    XOR EAX,EAX                         ; 004858ac
        ;   Label: LAB_004858ac
    POP EBP                             ; 004858ae
    POP EDI                             ; 004858af
    POP ESI                             ; 004858b0
    POP EBX                             ; 004858b1
    RET                                 ; 004858b2
    XOR EAX,EAX                         ; 004858b3
        ;   Label: LAB_004858b3
    MOV AL,byte ptr [ESI]               ; 004858b5
    PUSH EAX                            ; 004858b7
    CALL crt_ctype.c_tolower_FUN_005b8470 ; 004858b8
        ;   XREF to: 005b8470 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005b8470(int character)
    MOV EDI,EAX                         ; 004858bd
    XOR EAX,EAX                         ; 004858bf
    ADD ESP,0x4                         ; 004858c1
    MOV AL,byte ptr [EBX]               ; 004858c4
    PUSH EAX                            ; 004858c6
    CALL crt_ctype.c_tolower_FUN_005b8470 ; 004858c7
        ;   XREF to: 005b8470 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005b8470(int character)
    ADD ESP,0x4                         ; 004858cc
    CMP EDI,EAX                         ; 004858cf
    JZ 0x0048586c                       ; 004858d1
        ;   XREF to: 0048586c (CONDITIONAL_JUMP)  ; LAB_0048586c
    XOR EAX,EAX                         ; 004858d3
    POP EBP                             ; 004858d5
    POP EDI                             ; 004858d6
    POP ESI                             ; 004858d7
    POP EBX                             ; 004858d8
    RET                                 ; 004858d9
    JBE 0x00485885                      ; 004858da
        ;   XREF to: 00485885 (CONDITIONAL_JUMP)  ; LAB_00485885
        ;   Label: LAB_004858da
    CMP AL,0x3f                         ; 004858dc
    JZ 0x004858a7                       ; 004858de
        ;   XREF to: 004858a7 (CONDITIONAL_JUMP)  ; LAB_004858a7
    JMP 0x00485862                      ; 004858e0
        ;   XREF to: 00485862 (UNCONDITIONAL_JUMP)  ; LAB_00485862

