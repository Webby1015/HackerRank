
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode * node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode * head = llist;
    if(position == 0){
        node->next = head;
        return node;
    }

    SinglyLinkedListNode * afterPosition = head;
    SinglyLinkedListNode * beforePosition = head;
    head = head->next;
    while(position-- >= 1){
        beforePosition = head;
        head = head->next;
        afterPosition = head;
        if(position == 1){
            beforePosition->next = node;
            node->next = afterPosition; 
        }
    }
    return llist;
}
