; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_msnedit_cpp_FUN_00535e70(void)
;
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 0053a9cb
;
; Referenced Globals:
;   TerminatedCString s_Master_editor_keys_0063b2f7
;   TerminatedCString s_Show_this_help_screen_0063b30b
;   TerminatedCString s_F1_0063b321
;   TerminatedCString s_Next_camera_0063b324
;   TerminatedCString s_C_0063b330
;   TerminatedCString s_Prev_camera_0063b332
;   TerminatedCString s_SHIFT_C_0063b33e
;   TerminatedCString s_Toggle_virtual_director_0063b346
;   TerminatedCString s_E_0063b35e
;   TerminatedCString s_Next_View_0063b360
;   TerminatedCString s_V_0063b36a
;   TerminatedCString s_Previous_View_0063b36c
;   TerminatedCString s_SHIFT_V_0063b37a
;   TerminatedCString s_Next_actor_0063b382
;   TerminatedCString s_TAB_0063b38d
;   ... and 67 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawLine_FUN_004011b0
;   engine_2d.c_drawText_FUN_00401fd0
;   shape_edittool.cpp_calculateGridWidth_FUN_004a6490
;   shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380
;   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
;   shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20
;   shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0
;   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10
;   shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00535e70
        ;   Label: core_msnedit.cpp_FUN_00535e70
    PUSH ESI                            ; 00535e71
    PUSH EDI                            ; 00535e72
    PUSH EBP                            ; 00535e73
    SUB ESP,0x100                       ; 00535e74
    LEA EAX,[ESP + 0xc8]                ; 00535e7a
    PUSH EAX                            ; 00535e81
    CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0 ; 00535e82
        ;   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00535e87
    MOV ESI,0x8                         ; 00535e8a
    MOV EDI,0xb                         ; 00535e8f
    XOR EBP,EBP                         ; 00535e94
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00535e96
        ;   Label: LAB_00535e96
    MOV EDX,EAX                         ; 00535e9d
    MOV dword ptr [ESP + 0xfc],EAX      ; 00535e9f
    NEG EDX                             ; 00535ea6
    MOV dword ptr [ESP + 0xfc],EDX      ; 00535ea8
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00535eaf
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00535eb4
    PUSH ECX                            ; 00535ebb
    MOV EBX,dword ptr [0x02d02558]      ; 00535ebc | g_ClipLeft
    PUSH EBX                            ; 00535ec2
    PUSH 0x63b2f7                       ; 00535ec3 | = "Master editor keys:"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00535ec8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00535ecd
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00535ed0
    ADD EAX,0x16                        ; 00535ed7
    PUSH EAX                            ; 00535eda
    MOV ECX,dword ptr [0x02d02558]      ; 00535edb | g_ClipLeft
    PUSH ECX                            ; 00535ee1
    PUSH 0x63b321                       ; 00535ee2 | = "F1"
    MOV dword ptr [ESP + 0x108],EAX     ; 00535ee7
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00535eee
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00535ef3 | g_WindowWidth
    MOV EDX,EAX                         ; 00535ef8
    SAR EDX,0x1f                        ; 00535efa
    IDIV ESI                            ; 00535efd
    ADD ESP,0xc                         ; 00535eff
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00535f02
    MOV EDX,dword ptr [0x02d02558]      ; 00535f09 | g_ClipLeft
    PUSH EBX                            ; 00535f0f
    ADD EAX,EDX                         ; 00535f10
    PUSH EAX                            ; 00535f12
    PUSH 0x63b30b                       ; 00535f13 | = "Show this help screen"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00535f18
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00535f1d
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00535f20
    ADD ECX,0x16                        ; 00535f27
    PUSH ECX                            ; 00535f2a
    MOV EAX,[0x02d02558]                ; 00535f2b | g_ClipLeft
    PUSH EAX                            ; 00535f30
    PUSH 0x63b330                       ; 00535f31 | = "C"
    MOV dword ptr [ESP + 0x108],ECX     ; 00535f36
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00535f3d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00535f42
    MOV EDX,dword ptr [ESP + 0xfc]      ; 00535f45
    MOV EAX,[0x00679394]                ; 00535f4c | g_WindowWidth
    PUSH EDX                            ; 00535f51
    MOV EDX,EAX                         ; 00535f52
    SAR EDX,0x1f                        ; 00535f54
    IDIV ESI                            ; 00535f57
    ADD EAX,dword ptr [0x02d02558]      ; 00535f59 | g_ClipLeft
    PUSH EAX                            ; 00535f5f
    PUSH 0x63b324                       ; 00535f60 | = "Next camera"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00535f65
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00535f6a
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00535f6d
    ADD EBX,EDI                         ; 00535f74
    PUSH EBX                            ; 00535f76
    MOV EDX,dword ptr [0x02d02558]      ; 00535f77 | g_ClipLeft
    PUSH EDX                            ; 00535f7d
    PUSH 0x63b33e                       ; 00535f7e | = "SHIFT+C"
    MOV dword ptr [ESP + 0x108],EBX     ; 00535f83
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00535f8a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00535f8f | g_WindowWidth
    MOV EDX,EAX                         ; 00535f94
    SAR EDX,0x1f                        ; 00535f96
    IDIV ESI                            ; 00535f99
    ADD ESP,0xc                         ; 00535f9b
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00535f9e
    MOV EBX,dword ptr [0x02d02558]      ; 00535fa5 | g_ClipLeft
    PUSH ECX                            ; 00535fab
    ADD EAX,EBX                         ; 00535fac
    PUSH EAX                            ; 00535fae
    PUSH 0x63b332                       ; 00535faf | = "Prev camera"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00535fb4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00535fb9
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00535fbc
    ADD EAX,EDI                         ; 00535fc3
    MOV dword ptr [ESP + 0xfc],EAX      ; 00535fc5
    PUSH EAX                            ; 00535fcc
    MOV ECX,dword ptr [0x02d02558]      ; 00535fcd | g_ClipLeft
    PUSH ECX                            ; 00535fd3
    PUSH 0x63b35e                       ; 00535fd4 | = "E"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00535fd9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00535fde | g_WindowWidth
    MOV EDX,EAX                         ; 00535fe3
    SAR EDX,0x1f                        ; 00535fe5
    IDIV ESI                            ; 00535fe8
    ADD ESP,0xc                         ; 00535fea
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00535fed
    MOV EDX,dword ptr [0x02d02558]      ; 00535ff4 | g_ClipLeft
    PUSH EBX                            ; 00535ffa
    ADD EAX,EDX                         ; 00535ffb
    PUSH EAX                            ; 00535ffd
    PUSH 0x63b346                       ; 00535ffe | = "Toggle virtual director"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536003
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536008
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0053600b
    ADD ECX,EDI                         ; 00536012
    PUSH ECX                            ; 00536014
    MOV EAX,[0x02d02558]                ; 00536015 | g_ClipLeft
    PUSH EAX                            ; 0053601a
    PUSH 0x63b36a                       ; 0053601b | = "V"
    MOV dword ptr [ESP + 0x108],ECX     ; 00536020
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536027
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053602c
    MOV EDX,dword ptr [ESP + 0xfc]      ; 0053602f
    MOV EAX,[0x00679394]                ; 00536036 | g_WindowWidth
    PUSH EDX                            ; 0053603b
    MOV EDX,EAX                         ; 0053603c
    SAR EDX,0x1f                        ; 0053603e
    IDIV ESI                            ; 00536041
    ADD EAX,dword ptr [0x02d02558]      ; 00536043 | g_ClipLeft
    PUSH EAX                            ; 00536049
    PUSH 0x63b360                       ; 0053604a | = "Next View"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053604f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536054
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00536057
    ADD EBX,EDI                         ; 0053605e
    PUSH EBX                            ; 00536060
    MOV EDX,dword ptr [0x02d02558]      ; 00536061 | g_ClipLeft
    PUSH EDX                            ; 00536067
    PUSH 0x63b37a                       ; 00536068 | = "SHIFT+V"
    MOV dword ptr [ESP + 0x108],EBX     ; 0053606d
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536074
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00536079 | g_WindowWidth
    MOV EDX,EAX                         ; 0053607e
    SAR EDX,0x1f                        ; 00536080
    IDIV ESI                            ; 00536083
    ADD ESP,0xc                         ; 00536085
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00536088
    MOV EBX,dword ptr [0x02d02558]      ; 0053608f | g_ClipLeft
    PUSH ECX                            ; 00536095
    ADD EAX,EBX                         ; 00536096
    PUSH EAX                            ; 00536098
    PUSH 0x63b36c                       ; 00536099 | = "Previous View"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053609e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005360a3
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005360a6
    ADD EAX,0x16                        ; 005360ad
    MOV dword ptr [ESP + 0xfc],EAX      ; 005360b0
    PUSH EAX                            ; 005360b7
    MOV ECX,dword ptr [0x02d02558]      ; 005360b8 | g_ClipLeft
    PUSH ECX                            ; 005360be
    PUSH 0x63b38d                       ; 005360bf | = "TAB"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005360c4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 005360c9 | g_WindowWidth
    MOV EDX,EAX                         ; 005360ce
    SAR EDX,0x1f                        ; 005360d0
    IDIV ESI                            ; 005360d3
    ADD ESP,0xc                         ; 005360d5
    MOV EBX,dword ptr [ESP + 0xfc]      ; 005360d8
    MOV EDX,dword ptr [0x02d02558]      ; 005360df | g_ClipLeft
    PUSH EBX                            ; 005360e5
    ADD EAX,EDX                         ; 005360e6
    PUSH EAX                            ; 005360e8
    PUSH 0x63b382                       ; 005360e9 | = "Next actor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005360ee
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005360f3
    MOV ECX,dword ptr [ESP + 0xfc]      ; 005360f6
    ADD ECX,EDI                         ; 005360fd
    PUSH ECX                            ; 005360ff
    MOV EAX,[0x02d02558]                ; 00536100 | g_ClipLeft
    PUSH EAX                            ; 00536105
    PUSH 0x63b3a0                       ; 00536106 | = "SHIFT+TAB"
    MOV dword ptr [ESP + 0x108],ECX     ; 0053610b
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536112
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536117
    MOV EDX,dword ptr [ESP + 0xfc]      ; 0053611a
    MOV EAX,[0x00679394]                ; 00536121 | g_WindowWidth
    PUSH EDX                            ; 00536126
    MOV EDX,EAX                         ; 00536127
    SAR EDX,0x1f                        ; 00536129
    IDIV ESI                            ; 0053612c
    ADD EAX,dword ptr [0x02d02558]      ; 0053612e | g_ClipLeft
    PUSH EAX                            ; 00536134
    PUSH 0x63b391                       ; 00536135 | = "Previous actor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053613a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053613f
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00536142
    ADD EBX,EDI                         ; 00536149
    PUSH EBX                            ; 0053614b
    MOV EDX,dword ptr [0x02d02558]      ; 0053614c | g_ClipLeft
    PUSH EDX                            ; 00536152
    PUSH 0x63b3bf                       ; 00536153 | = "N"
    MOV dword ptr [ESP + 0x108],EBX     ; 00536158
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053615f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00536164 | g_WindowWidth
    MOV EDX,EAX                         ; 00536169
    SAR EDX,0x1f                        ; 0053616b
    IDIV ESI                            ; 0053616e
    ADD ESP,0xc                         ; 00536170
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00536173
    MOV EBX,dword ptr [0x02d02558]      ; 0053617a | g_ClipLeft
    PUSH ECX                            ; 00536180
    ADD EAX,EBX                         ; 00536181
    PUSH EAX                            ; 00536183
    PUSH 0x63b3aa                       ; 00536184 | = "Select actor by name"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536189
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053618e
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00536191
    ADD EAX,0x16                        ; 00536198
    MOV dword ptr [ESP + 0xfc],EAX      ; 0053619b
    PUSH EAX                            ; 005361a2
    MOV ECX,dword ptr [0x02d02558]      ; 005361a3 | g_ClipLeft
    PUSH ECX                            ; 005361a9
    PUSH 0x63b3ce                       ; 005361aa | = "I"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005361af
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 005361b4 | g_WindowWidth
    MOV EDX,EAX                         ; 005361b9
    SAR EDX,0x1f                        ; 005361bb
    IDIV ESI                            ; 005361be
    ADD ESP,0xc                         ; 005361c0
    MOV EBX,dword ptr [ESP + 0xfc]      ; 005361c3
    MOV EDX,dword ptr [0x02d02558]      ; 005361ca | g_ClipLeft
    PUSH EBX                            ; 005361d0
    ADD EAX,EDX                         ; 005361d1
    PUSH EAX                            ; 005361d3
    PUSH 0x63b3c1                       ; 005361d4 | = "Insert actor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005361d9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005361de
    MOV ECX,dword ptr [ESP + 0xfc]      ; 005361e1
    ADD ECX,EDI                         ; 005361e8
    PUSH ECX                            ; 005361ea
    MOV EAX,[0x02d02558]                ; 005361eb | g_ClipLeft
    PUSH EAX                            ; 005361f0
    PUSH 0x63b3dd                       ; 005361f1 | = "D"
    MOV dword ptr [ESP + 0x108],ECX     ; 005361f6
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005361fd
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536202
    MOV EDX,dword ptr [ESP + 0xfc]      ; 00536205
    MOV EAX,[0x00679394]                ; 0053620c | g_WindowWidth
    PUSH EDX                            ; 00536211
    MOV EDX,EAX                         ; 00536212
    SAR EDX,0x1f                        ; 00536214
    IDIV ESI                            ; 00536217
    ADD EAX,dword ptr [0x02d02558]      ; 00536219 | g_ClipLeft
    PUSH EAX                            ; 0053621f
    PUSH 0x63b3d0                       ; 00536220 | = "Delete actor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536225
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053622a
    MOV EBX,dword ptr [ESP + 0xfc]      ; 0053622d
    ADD EBX,EDI                         ; 00536234
    PUSH EBX                            ; 00536236
    MOV EDX,dword ptr [0x02d02558]      ; 00536237 | g_ClipLeft
    PUSH EDX                            ; 0053623d
    PUSH 0x63b3f6                       ; 0053623e | = "Shift+D"
    MOV dword ptr [ESP + 0x108],EBX     ; 00536243
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053624a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0053624f | g_WindowWidth
    MOV EDX,EAX                         ; 00536254
    SAR EDX,0x1f                        ; 00536256
    IDIV ESI                            ; 00536259
    ADD ESP,0xc                         ; 0053625b
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0053625e
    MOV EBX,dword ptr [0x02d02558]      ; 00536265 | g_ClipLeft
    PUSH ECX                            ; 0053626b
    ADD EAX,EBX                         ; 0053626c
    PUSH EAX                            ; 0053626e
    PUSH 0x63b3df                       ; 0053626f | = "Delete multiple actors"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536274
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536279
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0053627c
    ADD EAX,EDI                         ; 00536283
    MOV dword ptr [ESP + 0xfc],EAX      ; 00536285
    PUSH EAX                            ; 0053628c
    MOV ECX,dword ptr [0x02d02558]      ; 0053628d | g_ClipLeft
    PUSH ECX                            ; 00536293
    PUSH 0x63b40e                       ; 00536294 | = "R"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536299
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0053629e | g_WindowWidth
    MOV EDX,EAX                         ; 005362a3
    SAR EDX,0x1f                        ; 005362a5
    IDIV ESI                            ; 005362a8
    ADD ESP,0xc                         ; 005362aa
    MOV EBX,dword ptr [ESP + 0xfc]      ; 005362ad
    MOV EDX,dword ptr [0x02d02558]      ; 005362b4 | g_ClipLeft
    PUSH EBX                            ; 005362ba
    ADD EAX,EDX                         ; 005362bb
    PUSH EAX                            ; 005362bd
    PUSH 0x63b3fe                       ; 005362be | = "Replicate actor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005362c3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005362c8
    MOV ECX,dword ptr [ESP + 0xfc]      ; 005362cb
    ADD ECX,EDI                         ; 005362d2
    PUSH ECX                            ; 005362d4
    MOV EAX,[0x02d02558]                ; 005362d5 | g_ClipLeft
    PUSH EAX                            ; 005362da
    PUSH 0x63b42e                       ; 005362db | = "T"
    MOV dword ptr [ESP + 0x108],ECX     ; 005362e0
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005362e7
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005362ec
    MOV EDX,dword ptr [ESP + 0xfc]      ; 005362ef
    MOV EAX,[0x00679394]                ; 005362f6 | g_WindowWidth
    PUSH EDX                            ; 005362fb
    MOV EDX,EAX                         ; 005362fc
    SAR EDX,0x1f                        ; 005362fe
    IDIV ESI                            ; 00536301
    ADD EAX,dword ptr [0x02d02558]      ; 00536303 | g_ClipLeft
    PUSH EAX                            ; 00536309
    PUSH 0x63b410                       ; 0053630a | = "Change Type of selected actor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053630f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536314
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00536317
    ADD EBX,0x16                        ; 0053631e
    PUSH EBX                            ; 00536321
    MOV EDX,dword ptr [0x02d02558]      ; 00536322 | g_ClipLeft
    PUSH EDX                            ; 00536328
    PUSH 0x63b447                       ; 00536329 | = "O"
    MOV dword ptr [ESP + 0x108],EBX     ; 0053632e
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536335
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0053633a | g_WindowWidth
    MOV EDX,EAX                         ; 0053633f
    SAR EDX,0x1f                        ; 00536341
    IDIV ESI                            ; 00536344
    ADD ESP,0xc                         ; 00536346
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00536349
    MOV EBX,dword ptr [0x02d02558]      ; 00536350 | g_ClipLeft
    PUSH ECX                            ; 00536356
    ADD EAX,EBX                         ; 00536357
    PUSH EAX                            ; 00536359
    PUSH 0x63b430                       ; 0053635a | = "Mission editor Options"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053635f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536364
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00536367
    ADD EAX,EDI                         ; 0053636e
    MOV dword ptr [ESP + 0xfc],EAX      ; 00536370
    PUSH EAX                            ; 00536377
    MOV ECX,dword ptr [0x02d02558]      ; 00536378 | g_ClipLeft
    PUSH ECX                            ; 0053637e
    PUSH 0x63b456                       ; 0053637f | = "CTRL+S"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536384
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00536389 | g_WindowWidth
    MOV EDX,EAX                         ; 0053638e
    SAR EDX,0x1f                        ; 00536390
    IDIV ESI                            ; 00536393
    ADD ESP,0xc                         ; 00536395
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00536398
    MOV EDX,dword ptr [0x02d02558]      ; 0053639f | g_ClipLeft
    PUSH EBX                            ; 005363a5
    ADD EAX,EDX                         ; 005363a6
    PUSH EAX                            ; 005363a8
    PUSH 0x63b449                       ; 005363a9 | = "Save mission"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005363ae
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005363b3
    MOV ECX,dword ptr [ESP + 0xfc]      ; 005363b6
    ADD ECX,EDI                         ; 005363bd
    PUSH ECX                            ; 005363bf
    MOV EAX,[0x02d02558]                ; 005363c0 | g_ClipLeft
    PUSH EAX                            ; 005363c5
    PUSH 0x63b470                       ; 005363c6 | = "W"
    MOV dword ptr [ESP + 0x108],ECX     ; 005363cb
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005363d2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005363d7
    MOV EDX,dword ptr [ESP + 0xfc]      ; 005363da
    MOV EAX,[0x00679394]                ; 005363e1 | g_WindowWidth
    PUSH EDX                            ; 005363e6
    MOV EDX,EAX                         ; 005363e7
    SAR EDX,0x1f                        ; 005363e9
    IDIV ESI                            ; 005363ec
    ADD EAX,dword ptr [0x02d02558]      ; 005363ee | g_ClipLeft
    PUSH EAX                            ; 005363f4
    PUSH 0x63b45d                       ; 005363f5 | = "Full screen toggle"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005363fa
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005363ff
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00536402
    ADD EBX,EDI                         ; 00536409
    PUSH EBX                            ; 0053640b
    MOV EDX,dword ptr [0x02d02558]      ; 0053640c | g_ClipLeft
    PUSH EDX                            ; 00536412
    PUSH 0x63b4a8                       ; 00536413 | = "BackSpc"
    MOV dword ptr [ESP + 0x108],EBX     ; 00536418
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053641f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00536424 | g_WindowWidth
    MOV EDX,EAX                         ; 00536429
    SAR EDX,0x1f                        ; 0053642b
    IDIV ESI                            ; 0053642e
    ADD ESP,0xc                         ; 00536430
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00536433
    MOV EBX,dword ptr [0x02d02558]      ; 0053643a | g_ClipLeft
    PUSH ECX                            ; 00536440
    ADD EAX,EBX                         ; 00536441
    PUSH EAX                            ; 00536443
    PUSH 0x63b472                       ; 00536444 | = "Undo actor changes made since actor w..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536449
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053644e
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00536451
    ADD EAX,0x16                        ; 00536458
    MOV dword ptr [ESP + 0xfc],EAX      ; 0053645b
    PUSH EAX                            ; 00536462
    MOV ECX,dword ptr [0x02d02558]      ; 00536463 | g_ClipLeft
    PUSH ECX                            ; 00536469
    PUSH 0x63b4c4                       ; 0053646a | = "H"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053646f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00536474 | g_WindowWidth
    MOV EDX,EAX                         ; 00536479
    SAR EDX,0x1f                        ; 0053647b
    IDIV ESI                            ; 0053647e
    ADD ESP,0xc                         ; 00536480
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00536483
    MOV EDX,dword ptr [0x02d02558]      ; 0053648a | g_ClipLeft
    PUSH EBX                            ; 00536490
    ADD EAX,EDX                         ; 00536491
    PUSH EAX                            ; 00536493
    PUSH 0x63b4b0                       ; 00536494 | = "Hide selected actor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536499
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053649e
    MOV ECX,dword ptr [ESP + 0xfc]      ; 005364a1
    ADD ECX,EDI                         ; 005364a8
    PUSH ECX                            ; 005364aa
    MOV EAX,[0x02d02558]                ; 005364ab | g_ClipLeft
    PUSH EAX                            ; 005364b0
    PUSH 0x63b4db                       ; 005364b1 | = "Shift+H"
    MOV dword ptr [ESP + 0x108],ECX     ; 005364b6
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005364bd
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005364c2
    MOV EDX,dword ptr [ESP + 0xfc]      ; 005364c5
    MOV EAX,[0x00679394]                ; 005364cc | g_WindowWidth
    PUSH EDX                            ; 005364d1
    MOV EDX,EAX                         ; 005364d2
    SAR EDX,0x1f                        ; 005364d4
    IDIV ESI                            ; 005364d7
    ADD EAX,dword ptr [0x02d02558]      ; 005364d9 | g_ClipLeft
    PUSH EAX                            ; 005364df
    PUSH 0x63b4c6                       ; 005364e0 | = "Hide multiple actors"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005364e5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005364ea
    MOV EBX,dword ptr [ESP + 0xfc]      ; 005364ed
    ADD EBX,EDI                         ; 005364f4
    PUSH EBX                            ; 005364f6
    MOV EDX,dword ptr [0x02d02558]      ; 005364f7 | g_ClipLeft
    PUSH EDX                            ; 005364fd
    PUSH 0x63b4f9                       ; 005364fe | = "U"
    MOV dword ptr [ESP + 0x108],EBX     ; 00536503
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053650a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0053650f | g_WindowWidth
    MOV EDX,EAX                         ; 00536514
    SAR EDX,0x1f                        ; 00536516
    IDIV ESI                            ; 00536519
    ADD ESP,0xc                         ; 0053651b
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0053651e
    MOV EBX,dword ptr [0x02d02558]      ; 00536525 | g_ClipLeft
    PUSH ECX                            ; 0053652b
    ADD EAX,EBX                         ; 0053652c
    PUSH EAX                            ; 0053652e
    PUSH 0x63b4e3                       ; 0053652f | = "Unhide actors by name"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536534
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536539
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0053653c
    ADD EAX,EDI                         ; 00536543
    MOV dword ptr [ESP + 0xfc],EAX      ; 00536545
    PUSH EAX                            ; 0053654c
    MOV ECX,dword ptr [0x02d02558]      ; 0053654d | g_ClipLeft
    PUSH ECX                            ; 00536553
    PUSH 0x63b50d                       ; 00536554 | = "Shift+U"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536559
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0053655e | g_WindowWidth
    MOV EDX,EAX                         ; 00536563
    SAR EDX,0x1f                        ; 00536565
    IDIV ESI                            ; 00536568
    ADD ESP,0xc                         ; 0053656a
    MOV EBX,dword ptr [ESP + 0xfc]      ; 0053656d
    MOV EDX,dword ptr [0x02d02558]      ; 00536574 | g_ClipLeft
    PUSH EBX                            ; 0053657a
    ADD EAX,EDX                         ; 0053657b
    PUSH EAX                            ; 0053657d
    PUSH 0x63b4fb                       ; 0053657e | = "Unhide all actors"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536583
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536588
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0053658b
    ADD ECX,0x16                        ; 00536592
    PUSH ECX                            ; 00536595
    MOV EAX,[0x02d02558]                ; 00536596 | g_ClipLeft
    PUSH EAX                            ; 0053659b
    PUSH 0x63b515                       ; 0053659c | = "Mouse controls:"
    MOV dword ptr [ESP + 0x108],ECX     ; 005365a1
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005365a8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005365ad
    MOV EDX,dword ptr [ESP + 0xfc]      ; 005365b0
    ADD EDX,EDI                         ; 005365b7
    PUSH EDX                            ; 005365b9
    MOV EBX,dword ptr [0x02d02558]      ; 005365ba | g_ClipLeft
    PUSH EBX                            ; 005365c0
    PUSH 0x63b555                       ; 005365c1 | = "Alt+Click"
    MOV dword ptr [ESP + 0x108],EDX     ; 005365c6
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005365cd
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005365d2
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005365d5
    PUSH EAX                            ; 005365dc
    MOV EAX,[0x00679394]                ; 005365dd | g_WindowWidth
    MOV EDX,EAX                         ; 005365e2
    SAR EDX,0x1f                        ; 005365e4
    IDIV ESI                            ; 005365e7
    ADD EAX,dword ptr [0x02d02558]      ; 005365e9 | g_ClipLeft
    PUSH EAX                            ; 005365ef
    PUSH 0x63b525                       ; 005365f0 | = "Type actor name or hilited property i..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005365f5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005365fa
    MOV ECX,dword ptr [ESP + 0xfc]      ; 005365fd
    ADD ECX,EDI                         ; 00536604
    PUSH ECX                            ; 00536606
    MOV EAX,[0x02d02558]                ; 00536607 | g_ClipLeft
    PUSH EAX                            ; 0053660c
    PUSH 0x63b585                       ; 0053660d | = "Ctrl+Click"
    MOV dword ptr [ESP + 0x108],ECX     ; 00536612
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536619
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053661e
    MOV EDX,dword ptr [ESP + 0xfc]      ; 00536621
    MOV EAX,[0x00679394]                ; 00536628 | g_WindowWidth
    PUSH EDX                            ; 0053662d
    MOV EDX,EAX                         ; 0053662e
    SAR EDX,0x1f                        ; 00536630
    IDIV ESI                            ; 00536633
    ADD EAX,dword ptr [0x02d02558]      ; 00536635 | g_ClipLeft
    PUSH EAX                            ; 0053663b
    PUSH 0x63b55f                       ; 0053663c | = "Copy actor property text to clipboard"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536641
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536646
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00536649
    ADD EBX,EDI                         ; 00536650
    MOV dword ptr [ESP + 0xfc],EBX      ; 00536652
    PUSH EBX                            ; 00536659
    MOV EDX,dword ptr [0x02d02558]      ; 0053665a | g_ClipLeft
    PUSH EDX                            ; 00536660
    PUSH 0x63b5d5                       ; 00536661 | = "Shift+Click"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536666
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0053666b | g_WindowWidth
    MOV EDX,EAX                         ; 00536670
    SAR EDX,0x1f                        ; 00536672
    IDIV ESI                            ; 00536675
    ADD ESP,0xc                         ; 00536677
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0053667a
    MOV EBX,dword ptr [0x02d02558]      ; 00536681 | g_ClipLeft
    PUSH ECX                            ; 00536687
    ADD EAX,EBX                         ; 00536688
    PUSH EAX                            ; 0053668a
    PUSH 0x63b590                       ; 0053668b | = "Envoke alternate editing function for..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536690
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536695
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00536698
    ADD EAX,0x16                        ; 0053669f
    PUSH EAX                            ; 005366a2
    MOV ECX,dword ptr [0x02d02558]      ; 005366a3 | g_ClipLeft
    PUSH ECX                            ; 005366a9
    PUSH 0x63b5e1                       ; 005366aa | = "Script editor keys:"
    MOV dword ptr [ESP + 0x108],EAX     ; 005366af
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005366b6
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005366bb
    MOV EBX,dword ptr [ESP + 0xfc]      ; 005366be
    ADD EBX,EDI                         ; 005366c5
    PUSH EBX                            ; 005366c7
    MOV EDX,dword ptr [0x02d02558]      ; 005366c8 | g_ClipLeft
    PUSH EDX                            ; 005366ce
    PUSH 0x63b60a                       ; 005366cf | = "F2"
    MOV dword ptr [ESP + 0x108],EBX     ; 005366d4
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005366db
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 005366e0 | g_WindowWidth
    MOV EDX,EAX                         ; 005366e5
    SAR EDX,0x1f                        ; 005366e7
    IDIV ESI                            ; 005366ea
    ADD ESP,0xc                         ; 005366ec
    MOV ECX,dword ptr [ESP + 0xfc]      ; 005366ef
    MOV EBX,dword ptr [0x02d02558]      ; 005366f6 | g_ClipLeft
    PUSH ECX                            ; 005366fc
    ADD EAX,EBX                         ; 005366fd
    PUSH EAX                            ; 005366ff
    PUSH 0x63b5f5                       ; 00536700 | = "Toggle script editor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536705
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053670a
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0053670d
    ADD EAX,EDI                         ; 00536714
    PUSH EAX                            ; 00536716
    MOV ECX,dword ptr [0x02d02558]      ; 00536717 | g_ClipLeft
    PUSH ECX                            ; 0053671d
    PUSH 0x63b61e                       ; 0053671e | = "CTRL+G"
    MOV dword ptr [ESP + 0x108],EAX     ; 00536723
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053672a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0053672f | g_WindowWidth
    MOV EDX,EAX                         ; 00536734
    SAR EDX,0x1f                        ; 00536736
    IDIV ESI                            ; 00536739
    ADD ESP,0xc                         ; 0053673b
    MOV EBX,dword ptr [ESP + 0xfc]      ; 0053673e
    MOV EDX,dword ptr [0x02d02558]      ; 00536745 | g_ClipLeft
    PUSH EBX                            ; 0053674b
    ADD EAX,EDX                         ; 0053674c
    PUSH EAX                            ; 0053674e
    PUSH 0x63b60d                       ; 0053674f | = "Goto line number"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536754
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536759
    MOV ECX,dword ptr [ESP + 0xfc]      ; 0053675c
    ADD ECX,EDI                         ; 00536763
    MOV dword ptr [ESP + 0xfc],ECX      ; 00536765
    PUSH ECX                            ; 0053676c
    MOV EAX,[0x02d02558]                ; 0053676d | g_ClipLeft
    PUSH EAX                            ; 00536772
    PUSH 0x63b62a                       ; 00536773 | = "CTRL+F"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536778
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053677d
    MOV EDX,dword ptr [ESP + 0xfc]      ; 00536780
    MOV EAX,[0x00679394]                ; 00536787 | g_WindowWidth
    PUSH EDX                            ; 0053678c
    MOV EDX,EAX                         ; 0053678d
    SAR EDX,0x1f                        ; 0053678f
    IDIV ESI                            ; 00536792
    ADD EAX,dword ptr [0x02d02558]      ; 00536794 | g_ClipLeft
    PUSH EAX                            ; 0053679a
    PUSH 0x63b625                       ; 0053679b | = "Find"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005367a0
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005367a5
    MOV EBX,dword ptr [ESP + 0xfc]      ; 005367a8
    ADD EBX,EDI                         ; 005367af
    PUSH EBX                            ; 005367b1
    MOV EDX,dword ptr [0x02d02558]      ; 005367b2 | g_ClipLeft
    PUSH EDX                            ; 005367b8
    PUSH 0x63b63b                       ; 005367b9 | = "F3"
    MOV dword ptr [ESP + 0x108],EBX     ; 005367be
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005367c5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 005367ca | g_WindowWidth
    MOV EDX,EAX                         ; 005367cf
    SAR EDX,0x1f                        ; 005367d1
    IDIV ESI                            ; 005367d4
    ADD ESP,0xc                         ; 005367d6
    MOV ECX,dword ptr [ESP + 0xfc]      ; 005367d9
    MOV EBX,dword ptr [0x02d02558]      ; 005367e0 | g_ClipLeft
    PUSH ECX                            ; 005367e6
    ADD EAX,EBX                         ; 005367e7
    PUSH EAX                            ; 005367e9
    PUSH 0x63b631                       ; 005367ea | = "Find next"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005367ef
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005367f4
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005367f7
    ADD EAX,EDI                         ; 005367fe
    PUSH EAX                            ; 00536800
    MOV ECX,dword ptr [0x02d02558]      ; 00536801 | g_ClipLeft
    PUSH ECX                            ; 00536807
    PUSH 0x63b648                       ; 00536808 | = "Shift+F3"
    MOV dword ptr [ESP + 0x108],EAX     ; 0053680d
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536814
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00536819 | g_WindowWidth
    MOV EDX,EAX                         ; 0053681e
    SAR EDX,0x1f                        ; 00536820
    IDIV ESI                            ; 00536823
    ADD ESP,0xc                         ; 00536825
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00536828
    MOV EDX,dword ptr [0x02d02558]      ; 0053682f | g_ClipLeft
    PUSH EBX                            ; 00536835
    ADD EAX,EDX                         ; 00536836
    PUSH EAX                            ; 00536838
    PUSH 0x63b63e                       ; 00536839 | = "Find prev"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053683e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536843
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00536846
    ADD ECX,EDI                         ; 0053684d
    MOV dword ptr [ESP + 0xfc],ECX      ; 0053684f
    PUSH ECX                            ; 00536856
    MOV EAX,[0x02d02558]                ; 00536857 | g_ClipLeft
    PUSH EAX                            ; 0053685c
    PUSH 0x63b66d                       ; 0053685d | = "F4"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536862
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00536867
    MOV EDX,dword ptr [ESP + 0xfc]      ; 0053686a
    MOV EAX,[0x00679394]                ; 00536871 | g_WindowWidth
    PUSH EDX                            ; 00536876
    MOV EDX,EAX                         ; 00536877
    SAR EDX,0x1f                        ; 00536879
    IDIV ESI                            ; 0053687c
    ADD EAX,dword ptr [0x02d02558]      ; 0053687e | g_ClipLeft
    PUSH EAX                            ; 00536884
    PUSH 0x63b651                       ; 00536885 | = "Context-sensative selection"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0053688a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053688f
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00536892
    ADD EBX,EDI                         ; 00536899
    PUSH EBX                            ; 0053689b
    MOV EDX,dword ptr [0x02d02558]      ; 0053689c | g_ClipLeft
    PUSH EDX                            ; 005368a2
    PUSH 0x63b698                       ; 005368a3 | = "F6"
    MOV dword ptr [ESP + 0x108],EBX     ; 005368a8
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005368af
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 005368b4 | g_WindowWidth
    MOV EDX,EAX                         ; 005368b9
    SAR EDX,0x1f                        ; 005368bb
    IDIV ESI                            ; 005368be
    ADD ESP,0xc                         ; 005368c0
    MOV ECX,dword ptr [ESP + 0xfc]      ; 005368c3
    MOV EBX,dword ptr [0x02d02558]      ; 005368ca | g_ClipLeft
    PUSH ECX                            ; 005368d0
    ADD EAX,EBX                         ; 005368d1
    PUSH EAX                            ; 005368d3
    PUSH 0x63b670                       ; 005368d4 | = "Jump to actor/label/camera under cursor"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005368d9
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005368de
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005368e1
    ADD EAX,EDI                         ; 005368e8
    PUSH EAX                            ; 005368ea
    MOV ECX,dword ptr [0x02d02558]      ; 005368eb | g_ClipLeft
    PUSH ECX                            ; 005368f1
    PUSH 0x63b6a8                       ; 005368f2 | = "F7"
    MOV dword ptr [ESP + 0x108],EAX     ; 005368f7
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005368fe
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00536903 | g_WindowWidth
    MOV EDX,EAX                         ; 00536908
    SAR EDX,0x1f                        ; 0053690a
    IDIV ESI                            ; 0053690d
    ADD ESP,0xc                         ; 0053690f
    MOV EBX,dword ptr [ESP + 0xfc]      ; 00536912
    MOV EDX,dword ptr [0x02d02558]      ; 00536919 | g_ClipLeft
    PUSH EBX                            ; 0053691f
    ADD EAX,EDX                         ; 00536920
    PUSH EAX                            ; 00536922
    PUSH 0x63b69b                       ; 00536923 | = "Syntax check"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00536928
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0053692d
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00536930
    ADD ECX,0x16                        ; 00536937
    MOV EBX,dword ptr [0x0067d550]      ; 0053693a | g_CDemonMissionPtr
    MOV dword ptr [ESP + 0xfc],ECX      ; 00536940
    MOV EBX,dword ptr [EBX + 0x28]      ; 00536947 | DAT_02f33768
    TEST EBX,EBX                        ; 0053694a
    JZ 0x00536a03                       ; 0053694c
        ;   XREF to: 00536a03 (CONDITIONAL_JUMP)  ; LAB_00536a03
    LEA EAX,[ECX + EDI*0x1]             ; 00536952
    MOV dword ptr [ESP + 0xfc],EAX      ; 00536955
    CMP EBP,EAX                         ; 0053695c
    JG 0x00536991                       ; 0053695e
        ;   XREF to: 00536991 (CONDITIONAL_JUMP)  ; LAB_00536991
    CMP EAX,dword ptr [0x02d02564]      ; 00536960 | g_ClipBottom
    JG 0x00536991                       ; 00536966
        ;   XREF to: 00536991 (CONDITIONAL_JUMP)  ; LAB_00536991
    MOV EDX,dword ptr [ESP + 0xfc]      ; 00536968
    PUSH EDX                            ; 0053696f
    MOV ECX,dword ptr [0x02d02560]      ; 00536970 | g_ClipRight
    PUSH ECX                            ; 00536976
    PUSH EDX                            ; 00536977
    MOV EDX,dword ptr [0x02d02558]      ; 00536978 | g_ClipLeft
    MOV EAX,0xff                        ; 0053697e
    PUSH EDX                            ; 00536983
    MOV [0x02d02570],EAX                ; 00536984 | g_ActiveRenderColor
    CALL engine_2d.c_drawLine_FUN_004011b0 ; 00536989
        ;   XREF to: 004011b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011b0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0053698e
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00536991
        ;   Label: LAB_00536991
    ADD ECX,EDI                         ; 00536998
    PUSH EBX                            ; 0053699a
    MOV dword ptr [ESP + 0x100],ECX     ; 0053699b
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90 ; 005369a2
        ;   XREF to: 00408b90 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005369a7
    PUSH EAX                            ; 005369aa
    PUSH EBX                            ; 005369ab
    PUSH 0x63b6ab                       ; 005369ac | = "Actor-specific help for selected acto..."
    LEA EAX,[ESP + 0xc]                 ; 005369b1
    PUSH EAX                            ; 005369b5
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005369b6
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005369bb
    MOV EAX,dword ptr [ESP + 0xfc]      ; 005369be
    PUSH EAX                            ; 005369c5
    MOV EDX,dword ptr [0x02d02558]      ; 005369c6 | g_ClipLeft
    PUSH EDX                            ; 005369cc
    LEA EAX,[ESP + 0x8]                 ; 005369cd
    PUSH EAX                            ; 005369d1
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005369d2
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005369d7
    MOV ECX,dword ptr [ESP + 0xfc]      ; 005369da
    LEA EDX,[ESP + 0xfc]                ; 005369e1
    ADD ECX,0x16                        ; 005369e8
    PUSH EDX                            ; 005369eb
    MOV dword ptr [ESP + 0x100],ECX     ; 005369ec
    PUSH EBX                            ; 005369f3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005369f4
    CALL dword ptr [EAX + 0xdc]         ; 005369fa
    ADD ESP,0x8                         ; 00536a00
    MOV EBX,dword ptr [0x02d02564]      ; 00536a03 | g_ClipBottom
        ;   Label: LAB_00536a03
    PUSH EBX                            ; 00536a09
    MOV EAX,[0x02d02560]                ; 00536a0a | g_ClipRight
    MOV ECX,dword ptr [ESP + 0x100]     ; 00536a0f
    PUSH EAX                            ; 00536a16
    MOV EDX,dword ptr [0x02d0255c]      ; 00536a17 | g_ClipTop
    ADD ECX,EDI                         ; 00536a1d
    PUSH EDX                            ; 00536a1f
    MOV dword ptr [ESP + 0x108],ECX     ; 00536a20
    CALL shape_edittool.cpp_calculateGridWidth_FUN_004a6490 ; 00536a27
        ;   XREF to: 004a6490 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_calculateGridWidth_FUN_004a6490()
    MOV EDX,dword ptr [0x00679394]      ; 00536a2c | g_WindowWidth
    SUB EDX,EAX                         ; 00536a32
    PUSH EDX                            ; 00536a34
    LEA EAX,[ESP + 0xd8]                ; 00536a35
    PUSH EAX                            ; 00536a3c
    CALL shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60 ; 00536a3d
        ;   XREF to: 004a5b60 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_setPosition_FUN_004a5b60(CEdScrollBar * this_ptr, int left_pos, int top_pos, int right_pos, ...)
    ADD ESP,0x14                        ; 00536a42
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00536a45
    ADD EAX,dword ptr [ESP + 0xc8]      ; 00536a4c
    MOV EDX,dword ptr [0x02d0255c]      ; 00536a53 | g_ClipTop
    MOV dword ptr [ESP + 0xcc],EAX      ; 00536a59
    MOV EAX,[0x02d02564]                ; 00536a60 | g_ClipBottom
    SUB EAX,EDX                         ; 00536a65
    DEC EAX                             ; 00536a67
    MOV dword ptr [ESP + 0xd0],EAX      ; 00536a68
    LEA EAX,[ESP + 0xc8]                ; 00536a6f
    PUSH EAX                            ; 00536a76
    CALL shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 ; 00536a77
        ;   XREF to: 004a5c10 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00536a7c
    LEA EAX,[ESP + 0xc8]                ; 00536a7f
    PUSH EAX                            ; 00536a86
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 ; 00536a87
        ;   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00536a8c
    PUSH EBP                            ; 00536a8f
    MOV ECX,dword ptr [0x00678a60]      ; 00536a90 | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH ECX                            ; 00536a96 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380 ; 00536a97
        ;   XREF to: 004a1380 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_setMousePointerType_FUN_004a1380(CEditorTools * this_ptr, int use_clipping)
    ADD ESP,0x8                         ; 00536a9c
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00536a9f
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    PUSH 0x1                            ; 00536aa4
    MOV EAX,[0x0067cf44]                ; 00536aa6 | g_CKeysPtr
    PUSH EAX                            ; 00536aab | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00536aac | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00536aae
    ADD ESP,0x8                         ; 00536ab1
    TEST EAX,EAX                        ; 00536ab4
    JNZ 0x00536b9b                      ; 00536ab6
        ;   XREF to: 00536b9b (CONDITIONAL_JUMP)  ; LAB_00536b9b
    PUSH 0x50                           ; 00536abc
    MOV EAX,[0x0067cf44]                ; 00536abe | g_CKeysPtr
    PUSH EAX                            ; 00536ac3 | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00536ac4 | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00536ac6
    ADD ESP,0x8                         ; 00536ac9
    TEST EAX,EAX                        ; 00536acc
    JZ 0x00536ad7                       ; 00536ace
        ;   XREF to: 00536ad7 (CONDITIONAL_JUMP)  ; LAB_00536ad7
    ADD dword ptr [ESP + 0xc8],EDI      ; 00536ad0
    PUSH 0x48                           ; 00536ad7
        ;   Label: LAB_00536ad7
    MOV EAX,[0x0067cf44]                ; 00536ad9 | g_CKeysPtr
    PUSH EAX                            ; 00536ade | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00536adf | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00536ae1
    ADD ESP,0x8                         ; 00536ae4
    TEST EAX,EAX                        ; 00536ae7
    JZ 0x00536af3                       ; 00536ae9
        ;   XREF to: 00536af3 (CONDITIONAL_JUMP)  ; LAB_00536af3
    SUB dword ptr [ESP + 0xc8],0xb      ; 00536aeb
    PUSH 0x51                           ; 00536af3
        ;   Label: LAB_00536af3
    MOV EAX,[0x0067cf44]                ; 00536af5 | g_CKeysPtr
    PUSH EAX                            ; 00536afa | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 00536afb | g_CKeysInstance
    CALL dword ptr [EDX + 0x4]          ; 00536afd
    ADD ESP,0x8                         ; 00536b00
    TEST EAX,EAX                        ; 00536b03
    JZ 0x00536b15                       ; 00536b05
        ;   XREF to: 00536b15 (CONDITIONAL_JUMP)  ; LAB_00536b15
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00536b07
    ADD dword ptr [ESP + 0xc8],EAX      ; 00536b0e
    PUSH 0x49                           ; 00536b15
        ;   Label: LAB_00536b15
    MOV EAX,[0x0067cf44]                ; 00536b17 | g_CKeysPtr
    PUSH EAX                            ; 00536b1c | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00536b1d | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00536b1f
    ADD ESP,0x8                         ; 00536b22
    TEST EAX,EAX                        ; 00536b25
    JZ 0x00536b37                       ; 00536b27
        ;   XREF to: 00536b37 (CONDITIONAL_JUMP)  ; LAB_00536b37
    MOV EAX,dword ptr [ESP + 0xd0]      ; 00536b29
    SUB dword ptr [ESP + 0xc8],EAX      ; 00536b30
    PUSH 0x47                           ; 00536b37
        ;   Label: LAB_00536b37
    MOV EAX,[0x0067cf44]                ; 00536b39 | g_CKeysPtr
    PUSH EAX                            ; 00536b3e | g_CKeysInstance
    MOV EBX,dword ptr [EAX]             ; 00536b3f | g_CKeysInstance
    CALL dword ptr [EBX + 0x4]          ; 00536b41
    ADD ESP,0x8                         ; 00536b44
    TEST EAX,EAX                        ; 00536b47
    JZ 0x00536b52                       ; 00536b49
        ;   XREF to: 00536b52 (CONDITIONAL_JUMP)  ; LAB_00536b52
    MOV dword ptr [ESP + 0xc8],EBP      ; 00536b4b
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00536b52
        ;   Label: LAB_00536b52
    MOV EBX,dword ptr [ESP + 0xd0]      ; 00536b59
    MOV EDX,dword ptr [ESP + 0xc8]      ; 00536b60
    SUB EAX,EBX                         ; 00536b67
    CMP EAX,EDX                         ; 00536b69
    JGE 0x00536b74                      ; 00536b6b
        ;   XREF to: 00536b74 (CONDITIONAL_JUMP)  ; LAB_00536b74
    MOV dword ptr [ESP + 0xc8],EAX      ; 00536b6d
    CMP EBP,dword ptr [ESP + 0xc8]      ; 00536b74
        ;   Label: LAB_00536b74
    JG 0x00536b92                       ; 00536b7b
        ;   XREF to: 00536b92 (CONDITIONAL_JUMP)  ; LAB_00536b92
    LEA EAX,[ESP + 0xc8]                ; 00536b7d
        ;   Label: LAB_00536b7d
    PUSH EAX                            ; 00536b84
    CALL shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0 ; 00536b85
        ;   XREF to: 004a5fc0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEdScrollBar_handleInput_FUN_004a5fc0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 00536b8a
    JMP 0x00535e96                      ; 00536b8d
        ;   XREF to: 00535e96 (UNCONDITIONAL_JUMP)  ; LAB_00535e96
    MOV dword ptr [ESP + 0xc8],EBP      ; 00536b92
        ;   Label: LAB_00536b92
    JMP 0x00536b7d                      ; 00536b99
        ;   XREF to: 00536b7d (UNCONDITIONAL_JUMP)  ; LAB_00536b7d
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00536b9b
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_00536b9b
    PUSH 0x0                            ; 00536ba0
    LEA EAX,[ESP + 0xcc]                ; 00536ba2
    PUSH EAX                            ; 00536ba9
    CALL shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20 ; 00536baa
        ;   XREF to: 004a5b20 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_dtor_FUN_004a5b20(CEdScrollBar * this_ptr)
    ADD ESP,0x8                         ; 00536baf
    ADD ESP,0x100                       ; 00536bb2
    POP EBP                             ; 00536bb8
    POP EDI                             ; 00536bb9
    POP ESI                             ; 00536bba
    POP EBX                             ; 00536bbb
    RET                                 ; 00536bbc

