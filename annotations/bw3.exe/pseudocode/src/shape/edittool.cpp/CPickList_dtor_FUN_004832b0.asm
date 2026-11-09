; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPickList * __cdecl shape_edittool_cpp_CPickList_dtor_FUN_004832b0(CPickList *this_ptr,uint flags)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[8]:
;   core_game.cpp_FUN_004b7f90 at 004b8b3c
;   core_menu.cpp_FUN_004e94f0 at 004e9d58
;   core_menu.cpp_FUN_004eae80 at 004ebe0c
;   core_mission.cpp_FUN_004f7a20 at 004f7b88
;   core_sound.cpp_FUN_00560c90 at 00560cfd
;   engine_pod.cpp_FUN_00513d1e at 00513f56
;   shape_edittool.cpp_FUN_0047db70 at 0047dcc2
;   shape_edittool.cpp_FUN_0047dd1e at 0047e00e
;
; Referenced Globals:
;   undefined1* g_CPickListVTable = 004832b0
;   WatcomTypeInfo g_CPickListTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   shape_edittool.cpp_CEdButton_dtor_FUN_00486050
;   shape_edittool.cpp_CEdScrollBar_dtor_FUN_00485550
;   shape_edittool.cpp_CStrList_dtor_FUN_00481f40
;   shape_edittool.cpp_FUN_00484f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004832b0
        ;   Label: shape_edittool.cpp_CPickList_dtor_FUN_004832b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004832b1
    TEST byte ptr [ESP + 0xc],0x4       ; 004832b5
    JNZ 0x0048331b                      ; 004832ba
        ;   XREF to: 0048331b (CONDITIONAL_JUMP)  ; LAB_0048331b
    PUSH EBX                            ; 004832bc
    MOV dword ptr [EBX + 0xc],0x5df044  ; 004832bd | g_CPickListVTable
    CALL shape_edittool.cpp_FUN_00484f10 ; 004832c4
        ;   XREF to: 00484f10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00484f10(CPickList * this_ptr)
    ADD ESP,0x4                         ; 004832c9
    PUSH 0x0                            ; 004832cc
    ADD EBX,0x2d8                       ; 004832ce
    PUSH EBX                            ; 004832d4
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_00486050 ; 004832d5
        ;   XREF to: 00486050 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_00486050(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004832da
    PUSH 0x0                            ; 004832dd
    SUB EAX,0xe4                        ; 004832df
    PUSH EAX                            ; 004832e4
    CALL shape_edittool.cpp_CEdButton_dtor_FUN_00486050 ; 004832e5
        ;   XREF to: 00486050 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_dtor_FUN_00486050(CEdButton * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004832ea
    PUSH 0x0                            ; 004832ed
    SUB EAX,0x38                        ; 004832ef
    PUSH EAX                            ; 004832f2
    CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_00485550 ; 004832f3
        ;   XREF to: 00485550 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_dtor_FUN_00485550(CEdScrollBar * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004832f8
    PUSH 0x1                            ; 004832fb
    LEA EBX,[EAX + 0xfffffe44]          ; 004832fd
    PUSH EBX                            ; 00483303
    CALL shape_edittool.cpp_CStrList_dtor_FUN_00481f40 ; 00483304
        ;   XREF to: 00481f40 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_dtor_FUN_00481f40(CStrList * this_ptr, uint flags)
    ADD ESP,0x8                         ; 00483309
    MOV DL,byte ptr [ESP + 0xc]         ; 0048330c
    MOV EBX,EAX                         ; 00483310
    TEST DL,0x2                         ; 00483312
    JNZ 0x00483336                      ; 00483315
        ;   XREF to: 00483336 (CONDITIONAL_JUMP)  ; LAB_00483336
    MOV EAX,EBX                         ; 00483317
    POP EBX                             ; 00483319
    RET                                 ; 0048331a
    PUSH 0x5df0c0                       ; 0048331b | g_CPickListTypeInfo
        ;   Label: LAB_0048331b
    PUSH EBX                            ; 00483320
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 00483321
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005a308f()
    ADD ESP,0x8                         ; 00483326
    PUSH EAX                            ; 00483329
    CALL crt_unknown.c_FUN_005a30b6     ; 0048332a
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0048332f
    MOV EAX,EBX                         ; 00483332
    POP EBX                             ; 00483334
    RET                                 ; 00483335
    PUSH EAX                            ; 00483336
        ;   Label: LAB_00483336
    CALL crt_unknown.c_FUN_005a30c4     ; 00483337
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 0048333c
    MOV EAX,EBX                         ; 0048333f
    POP EBX                             ; 00483341
    RET                                 ; 00483342

