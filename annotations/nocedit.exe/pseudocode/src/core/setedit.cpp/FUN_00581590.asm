; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setedit_cpp_FUN_00581590(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Show_this_help_screen_00648a3a
;   TerminatedCString s_F1_00648a50
;   TerminatedCString s_Set_default_room_size_fo_00648a53
;   TerminatedCString s_S_00648a71
;   TerminatedCString s_Next_room_00648a73
;   TerminatedCString s_TAB_00648a7d
;   TerminatedCString s_Previous_room_00648a81
;   TerminatedCString s_SHIFT_TAB_00648a8f
;   TerminatedCString s_Insert_room_00648a99
;   TerminatedCString s_I_00648aa5
;   TerminatedCString s_Delete_room_00648aa7
;   TerminatedCString s_D_00648ab3
;   TerminatedCString s_Deselect_room_00648ab5
;   TerminatedCString s_N_00648ac3
;   TerminatedCString s_To_position_the_selected_00648ac5
;   ... and 4 more
;
; Called Functions:
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_keys.cpp_CKeys_getInputKey_FUN_00502460
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00581590
        ;   Label: core_setedit.cpp_FUN_00581590
    PUSH ESI                            ; 00581591
    PUSH EDI                            ; 00581592
    PUSH EBP                            ; 00581593
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00581594
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,dword ptr [0x00679394]      ; 00581599 | g_WindowWidth
    IMUL EDX,ECX,0x0                    ; 0058159f
    MOV EAX,EDX                         ; 005815a2
    SAR EDX,0x1f                        ; 005815a4
    SUB EAX,EDX                         ; 005815a7
    SAR EAX,0x1                         ; 005815a9
    PUSH 0x0                            ; 005815ab
    PUSH EAX                            ; 005815ad
    PUSH 0x648a50                       ; 005815ae | = "F1"
    MOV EBX,EAX                         ; 005815b3
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005815b5
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 005815ba | g_WindowWidth
    MOV EDX,EAX                         ; 005815bf
    MOV ECX,0xa                         ; 005815c1
    SAR EDX,0x1f                        ; 005815c6
    IDIV ECX                            ; 005815c9
    ADD ESP,0xc                         ; 005815cb
    PUSH 0x0                            ; 005815ce
    ADD EAX,EBX                         ; 005815d0
    PUSH EAX                            ; 005815d2
    PUSH 0x648a3a                       ; 005815d3 | = "Show this help screen"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005815d8
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBX,dword ptr [0x00679394]      ; 005815dd | g_WindowWidth
    IMUL EDX,EBX,0x0                    ; 005815e3
    MOV EAX,EDX                         ; 005815e6
    SAR EDX,0x1f                        ; 005815e8
    SUB EAX,EDX                         ; 005815eb
    SAR EAX,0x1                         ; 005815ed
    ADD ESP,0xc                         ; 005815ef
    PUSH 0xb                            ; 005815f2
    PUSH EAX                            ; 005815f4
    PUSH 0x648a71                       ; 005815f5 | = "S"
    MOV EBX,EAX                         ; 005815fa
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005815fc
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00581601 | g_WindowWidth
    MOV EDX,EAX                         ; 00581606
    MOV ECX,0xa                         ; 00581608
    SAR EDX,0x1f                        ; 0058160d
    IDIV ECX                            ; 00581610
    ADD ESP,0xc                         ; 00581612
    PUSH 0xb                            ; 00581615
    ADD EAX,EBX                         ; 00581617
    PUSH EAX                            ; 00581619
    PUSH 0x648a53                       ; 0058161a | = "Set default room size for set"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058161f
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV ESI,dword ptr [0x00679394]      ; 00581624 | g_WindowWidth
    IMUL EDX,ESI,0x0                    ; 0058162a
    MOV EAX,EDX                         ; 0058162d
    SAR EDX,0x1f                        ; 0058162f
    SUB EAX,EDX                         ; 00581632
    SAR EAX,0x1                         ; 00581634
    ADD ESP,0xc                         ; 00581636
    PUSH 0x16                           ; 00581639
    PUSH EAX                            ; 0058163b
    PUSH 0x648a7d                       ; 0058163c | = "TAB"
    MOV EBX,EAX                         ; 00581641
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00581643
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00581648 | g_WindowWidth
    MOV EDX,EAX                         ; 0058164d
    MOV ECX,0xa                         ; 0058164f
    SAR EDX,0x1f                        ; 00581654
    IDIV ECX                            ; 00581657
    ADD ESP,0xc                         ; 00581659
    PUSH 0x16                           ; 0058165c
    ADD EAX,EBX                         ; 0058165e
    PUSH EAX                            ; 00581660
    PUSH 0x648a73                       ; 00581661 | = "Next room"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00581666
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0058166b
    MOV EDI,dword ptr [0x00679394]      ; 0058166e | g_WindowWidth
    IMUL EDX,EDI,0x0                    ; 00581674
    MOV EAX,EDX                         ; 00581677
    SAR EDX,0x1f                        ; 00581679
    SUB EAX,EDX                         ; 0058167c
    SAR EAX,0x1                         ; 0058167e
    PUSH 0x21                           ; 00581680
    PUSH EAX                            ; 00581682
    PUSH 0x648a8f                       ; 00581683 | = "SHIFT+TAB"
    MOV EBX,EAX                         ; 00581688
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058168a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0058168f | g_WindowWidth
    MOV EDX,EAX                         ; 00581694
    MOV ECX,0xa                         ; 00581696
    SAR EDX,0x1f                        ; 0058169b
    IDIV ECX                            ; 0058169e
    ADD ESP,0xc                         ; 005816a0
    PUSH 0x21                           ; 005816a3
    ADD EAX,EBX                         ; 005816a5
    PUSH EAX                            ; 005816a7
    PUSH 0x648a81                       ; 005816a8 | = "Previous room"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005816ad
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EBP,dword ptr [0x00679394]      ; 005816b2 | g_WindowWidth
    IMUL EDX,EBP,0x0                    ; 005816b8
    MOV EAX,EDX                         ; 005816bb
    SAR EDX,0x1f                        ; 005816bd
    SUB EAX,EDX                         ; 005816c0
    SAR EAX,0x1                         ; 005816c2
    ADD ESP,0xc                         ; 005816c4
    PUSH 0x2c                           ; 005816c7
    PUSH EAX                            ; 005816c9
    PUSH 0x648aa5                       ; 005816ca | = "I"
    MOV EBX,EAX                         ; 005816cf
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005816d1
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 005816d6 | g_WindowWidth
    MOV EDX,EAX                         ; 005816db
    MOV ECX,0xa                         ; 005816dd
    SAR EDX,0x1f                        ; 005816e2
    IDIV ECX                            ; 005816e5
    ADD ESP,0xc                         ; 005816e7
    PUSH 0x2c                           ; 005816ea
    ADD EAX,EBX                         ; 005816ec
    PUSH EAX                            ; 005816ee
    PUSH 0x648a99                       ; 005816ef | = "Insert room"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005816f4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 005816f9 | g_WindowWidth
    IMUL EDX,EAX,0x0                    ; 005816fe
    MOV EAX,EDX                         ; 00581701
    SAR EDX,0x1f                        ; 00581703
    SUB EAX,EDX                         ; 00581706
    SAR EAX,0x1                         ; 00581708
    ADD ESP,0xc                         ; 0058170a
    PUSH 0x37                           ; 0058170d
    PUSH EAX                            ; 0058170f
    PUSH 0x648ab3                       ; 00581710 | = "D"
    MOV EBX,EAX                         ; 00581715
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00581717
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 0058171c | g_WindowWidth
    MOV EDX,EAX                         ; 00581721
    MOV ECX,0xa                         ; 00581723
    SAR EDX,0x1f                        ; 00581728
    IDIV ECX                            ; 0058172b
    ADD ESP,0xc                         ; 0058172d
    PUSH 0x37                           ; 00581730
    ADD EAX,EBX                         ; 00581732
    PUSH EAX                            ; 00581734
    PUSH 0x648aa7                       ; 00581735 | = "Delete room"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058173a
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV ECX,dword ptr [0x00679394]      ; 0058173f | g_WindowWidth
    IMUL EDX,ECX,0x0                    ; 00581745
    MOV EAX,EDX                         ; 00581748
    SAR EDX,0x1f                        ; 0058174a
    SUB EAX,EDX                         ; 0058174d
    SAR EAX,0x1                         ; 0058174f
    ADD ESP,0xc                         ; 00581751
    PUSH 0x42                           ; 00581754
    PUSH EAX                            ; 00581756
    PUSH 0x648ac3                       ; 00581757 | = "N"
    MOV EBX,EAX                         ; 0058175c
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0058175e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    MOV EAX,[0x00679394]                ; 00581763 | g_WindowWidth
    MOV EDX,EAX                         ; 00581768
    MOV ECX,0xa                         ; 0058176a
    SAR EDX,0x1f                        ; 0058176f
    IDIV ECX                            ; 00581772
    ADD ESP,0xc                         ; 00581774
    PUSH 0x42                           ; 00581777
    ADD EAX,EBX                         ; 00581779
    PUSH EAX                            ; 0058177b
    PUSH 0x648ab5                       ; 0058177c | = "Deselect room"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00581781
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00581786
    PUSH 0x58                           ; 00581789
    PUSH 0x0                            ; 0058178b
    PUSH 0x648ac5                       ; 0058178d | = "To position the selected box, use the..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00581792
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00581797
    PUSH 0x63                           ; 0058179a
    PUSH 0x0                            ; 0058179c
    PUSH 0x648afd                       ; 0058179e | = "To size the selected box, use arrow k..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 005817a3
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 005817a8
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005817ab
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 005817b0
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    MOV EBX,dword ptr [0x0067cf44]      ; 005817b5 | g_CKeysPtr
    PUSH EBX                            ; 005817bb | g_CKeysInstance
    CALL engine_keys.cpp_CKeys_getInputKey_FUN_00502460 ; 005817bc
        ;   XREF to: 00502460 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getInputKey_FUN_00502460(CKeys * this_ptr)
    ADD ESP,0x4                         ; 005817c1
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 005817c4
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    POP EBP                             ; 005817c9
    POP EDI                             ; 005817ca
    POP ESI                             ; 005817cb
    POP EBX                             ; 005817cc
    RET                                 ; 005817cd

